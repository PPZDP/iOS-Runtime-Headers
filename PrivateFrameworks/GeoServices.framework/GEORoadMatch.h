/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadMatch : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinateOnRoad;
    double  _courseOnRoad;
    double  _distanceFromJunction;
    double  _distanceFromRoad;
    double  _junctionRadius;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; BOOL x_1_1_8; unsigned int x_1_1_9; double x_1_1_10; unsigned int x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_9_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned int x_20_1_1; unsigned int x_20_1_2; } x20; BOOL x21; } * _roadFeature;
    NSString * _roadName;
    double  _roadWidth;
}

@property (nonatomic) struct { double x1; double x2; } coordinateOnRoad;
@property (nonatomic) double courseOnRoad;
@property (nonatomic) double distanceFromJunction;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double junctionRadius;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; BOOL x_1_1_8; unsigned int x_1_1_9; double x_1_1_10; unsigned int x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_9_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned int x_20_1_1; unsigned int x_20_1_2; } x20; BOOL x21; }*roadFeature;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic) double roadWidth;

- (struct { double x1; double x2; })coordinateOnRoad;
- (double)courseOnRoad;
- (void)dealloc;
- (double)distanceFromJunction;
- (double)distanceFromRoad;
- (id)initWithCoordinateOnRoad:(struct { double x1; double x2; })arg1 courseOnRoad:(double)arg2;
- (double)junctionRadius;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; BOOL x_1_1_8; unsigned int x_1_1_9; double x_1_1_10; unsigned int x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_9_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned int x_20_1_1; unsigned int x_20_1_2; } x20; BOOL x21; }*)roadFeature;
- (id)roadName;
- (double)roadWidth;
- (void)setCoordinateOnRoad:(struct { double x1; double x2; })arg1;
- (void)setCourseOnRoad:(double)arg1;
- (void)setDistanceFromJunction:(double)arg1;
- (void)setDistanceFromRoad:(double)arg1;
- (void)setJunctionRadius:(double)arg1;
- (void)setRoadFeature:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; BOOL x_1_1_8; unsigned int x_1_1_9; double x_1_1_10; unsigned int x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_9_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned int x_20_1_1; unsigned int x_20_1_2; } x20; BOOL x21; }*)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRoadWidth:(double)arg1;

@end