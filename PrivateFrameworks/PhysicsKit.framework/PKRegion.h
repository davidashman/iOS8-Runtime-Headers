/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PKRegion : NSObject <NSCopying, NSCoding> {
    int _shape;
    bool_isExclusive;

  /* Error parsing encoded ivar type info: {vec4="v"} */
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    } _halfExtent;

    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _path;
    int _regionOp;
    int _shape2;

  /* Error parsing encoded ivar type info: {vec4="v"} */
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    } _halfExtent2;

    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _path2;
}

@property(readonly) struct CGPath { }* path;

+ (id)infiniteRegion;

- (struct CGPath { }*)path;
- (void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithRadius:(float)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;

@end
