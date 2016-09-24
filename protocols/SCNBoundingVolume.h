/* Generated by RuntimeBrowser.
 */

@protocol SCNBoundingVolume <NSObject>

@required

- (BOOL)getBoundingBoxMin:(struct SCNVector3 { double x1; double x2; double x3; }*)arg1 max:(struct SCNVector3 { double x1; double x2; double x3; }*)arg2;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { double x1; double x2; double x3; }*)arg1 radius:(float*)arg2;
- (void)setBoundingBoxMin:(struct SCNVector3 { double x1; double x2; double x3; }*)arg1 max:(struct SCNVector3 { double x1; double x2; double x3; }*)arg2;

@end