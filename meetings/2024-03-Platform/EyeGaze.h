#include <cstdint>

typedef struct _POINT2D
{
    int32_t X;
    int32_t Y;
} POINT2D, *PPOINT2D;

typedef struct _POINT3D
{
    int32_t X;
    int32_t Y;
    int32_t Z;
} POINT3D, *PPOINT3D;

typedef struct _GAZE_DATA
{
    uint64_t TimeStamp;
    POINT2D GazePoint;
    POINT3D LeftEyePosition;
    POINT3D RightEyePosition;
    POINT3D HeadPosition;
    POINT3D HeadDirection;
} GAZE_DATA, *PGAZE_DATA;

typedef struct _CONFIGURATION_DATA
{
    uint16_t DisplayManufacturerId;
    uint16_t DisplayProductId;
    uint32_t DisplaySerialNumber;
    uint16_t DisplayManufacturerDate;
    uint32_t CalibratedScreenWidth;
    uint32_t CalibratedScreenHeight;
} CONFIGURATION_DATA, *PCONFIGURATION_DATA;

typedef struct _CAPABILITIES_DATA
{
    uint8_t TrackerQuality;
    uint32_t MinimumTrackingDistance;
    uint32_t OptimumTrackingDistance;
    uint32_t MaximumTrackingDistance;
    uint32_t MaximumScreenPlaneWidth;
    uint32_t MaximumScreenPlaneHeight;
} CAPABILITIES_DATA, * PCAPABILITIES_DATA;