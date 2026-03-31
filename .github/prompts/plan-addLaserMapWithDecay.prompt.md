# Add /Laser_map with Decay to LI-Init

**TL;DR**: Port the `publish_map()` implementation from FAST-LIO to LiDAR_IMU_Init. Add `pcl_wait_pub` accumulator, configurable decay time filtering, and periodic 1-second publishing via frame counting. Default decay = 3.0 seconds.

## Steps

### 1. Add global variables
**Location**: Near [laserMapping.cpp#L95](src/LiDAR_IMU_Init/src/laserMapping.cpp#L95)

Add:
- `PointCloudXYZI::Ptr pcl_wait_pub(new PointCloudXYZI())` - accumulator for map
- `bool map_pub_en = false` - enable/disable map publishing
- `double map_decay_time = -1.0` - decay time in seconds

### 2. Add parameter declarations
**Location**: In `init_parameters()` around [line 817](src/LiDAR_IMU_Init/src/laserMapping.cpp#L817)

Add:
- `node->declare_parameter<bool>("publish.map_en", false)`
- `node->declare_parameter<double>("publish.map_decay_time", -1.0)`

### 3. Add parameter loading
**Location**: Around [line 838](src/LiDAR_IMU_Init/src/laserMapping.cpp#L838)

Add:
- `node->get_parameter("publish.map_en", map_pub_en)`
- `node->get_parameter("publish.map_decay_time", map_decay_time)`

### 4. Rewrite `publish_map()` function
**Location**: [line 657](src/LiDAR_IMU_Init/src/laserMapping.cpp#L657)

Implementation:
- Transform current scan to world frame
- Store relative time (`lidar_end_time - first_lidar_time`) in `curvature` field
- Accumulate into `pcl_wait_pub`
- Filter out points older than `map_decay_time` (if > 0)
- Publish accumulated cloud

### 5. Add periodic map publishing
**Location**: In main loop near [line 1221](src/LiDAR_IMU_Init/src/laserMapping.cpp#L1221)

Add:
- Counter: `if (map_pub_en && frame_num % (orig_odom_freq * cut_frame_num) == 0)`
- Call `publish_map(pubLaserCloudMap, map_decay_time)`

### 6. Update config
**File**: [mid360.yaml](src/LiDAR_IMU_Init/config/mid360.yaml#L32)

Add under `publish:`:
- `map_en: true`
- `map_decay_time: 3.0`

## Verification

- `colcon build --packages-select lidar_imu_init`
- Run launch, verify `/Laser_map` topic publishes
- Check point cloud size stabilizes after ~3 seconds
- Confirm RViz shows sliding window of recent scans
