/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    double _suspensionStiffness;
    double _suspensionCompression;
    double _suspensionDamping;
    double _maximumSuspensionTravel;
    double _frictionSlip;
    double _maximumSuspensionForce;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _connectionPosition;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _steeringAxis;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _axle;
    double _radius;
    double _suspensionRestLength;
    bool_isFront;
}

@property(readonly) SCNNode * node;
@property double suspensionStiffness;
@property double suspensionCompression;
@property double suspensionDamping;
@property double maximumSuspensionTravel;
@property double frictionSlip;
@property double maximumSuspensionForce;
@property struct SCNVector3 { float x1; float x2; float x3; } connectionPosition;
@property struct SCNVector3 { float x1; float x2; float x3; } steeringAxis;
@property struct SCNVector3 { float x1; float x2; float x3; } axle;
@property double radius;
@property double suspensionRestLength;

+ (id)wheelWithNode:(id)arg1;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (void)_setWheelIndex:(int)arg1;
- (void)_setVehicle:(id)arg1;
- (void)setIsFront:(bool)arg1;
- (bool)isFront;
- (void)setSuspensionRestLength:(double)arg1;
- (double)suspensionRestLength;
- (void)setAxle:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })axle;
- (void)setSteeringAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })steeringAxis;
- (struct SCNVector3 { float x1; float x2; float x3; })connectionPosition;
- (void)setMaximumSuspensionForce:(double)arg1;
- (double)maximumSuspensionForce;
- (void)setFrictionSlip:(double)arg1;
- (double)frictionSlip;
- (void)setMaximumSuspensionTravel:(double)arg1;
- (double)maximumSuspensionTravel;
- (void)setSuspensionDamping:(double)arg1;
- (double)suspensionDamping;
- (void)setSuspensionCompression:(double)arg1;
- (double)suspensionCompression;
- (void)setSuspensionStiffness:(double)arg1;
- (double)suspensionStiffness;
- (void)setConnectionPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRadius:(double)arg1;
- (double)radius;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setNode:(id)arg1;
- (id)node;

@end
