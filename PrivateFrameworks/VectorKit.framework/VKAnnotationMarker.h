/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, VKAnimation, <VKAnnotation>, UIView, VKAnchor, <VKAnnotationMarkerDelegate>;

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <VKAnchorDelegate, VKTrackableAnnotationPresentation, MKCalloutSource> {
    <VKAnnotation> *_annotation;
    NSString *_reuseIdentifier;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _projectedPoint;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _projectedGroundPoint;
    bool_selected;
    bool_canShowCallout;
    long long _dragState;
    bool_draggable;
    bool_tracking;
    bool_animatingToCoordinate;
    VKAnimation *_coordinateAnimation;
    bool_followsTerrain;
    struct { 
        double latitude; 
        double longitude; 
    } _presentationCoordinate;
    struct CGPoint { 
        double x; 
        double y; 
    } _presentationPoint;
    bool_useScreenSpacePoint;
    float _dropFraction;
    VKAnchor *_anchor;
    struct { 
        int from; 
        int to; 
        unsigned long long fromDisplayStyle; 
        unsigned long long toDisplayStyle; 
        float fraction; 
    } _styleTransitionState;
    <VKAnnotationMarkerDelegate> *_delegate;
    bool_hidden;
    struct CGPoint { 
        double x; 
        double y; 
    } _calloutOffset;
}

@property(retain) UIView * leftCalloutAccessoryView;
@property(retain) UIView * rightCalloutAccessoryView;
@property(retain) UIView * detailCalloutAccessoryView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * subtitle;
@property <VKAnnotationMarkerDelegate> * delegate;
@property(readonly) NSString * reuseIdentifier;
@property(retain) <VKAnnotation> * annotation;
@property(copy,readonly) NSString * title;
@property struct { double x1; double x2; } presentationCoordinate;
@property struct CGPoint { double x1; double x2; } presentationPoint;
@property bool useScreenSpacePoint;
@property bool followsTerrain;
@property(getter=isSelected) bool selected;
@property bool canShowCallout;
@property struct CGPoint { double x1; double x2; } calloutOffset;
@property(getter=isDraggable) bool draggable;
@property long long dragState;
@property struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; } styleTransitionState;
@property(readonly) bool canAnimateIn;
@property(getter=isTracking) bool tracking;
@property bool animatingToCoordinate;
@property bool hidden;
@property struct VKPoint { double x1; double x2; double x3; } projectedPoint;
@property struct VKPoint { double x1; double x2; double x3; } projectedGroundPoint;
@property float dropFraction;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;

- (void)setDropFraction:(float)arg1;
- (float)dropFraction;
- (void)setUseScreenSpacePoint:(bool)arg1;
- (bool)useScreenSpacePoint;
- (bool)animatingToCoordinate;
- (void)setProjectedGroundPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })projectedGroundPoint;
- (void)setProjectedPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })projectedPoint;
- (id)debugAnchorPointString;
- (struct CGPoint { double x1; double x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2;
- (struct VKPoint { double x1; double x2; double x3; })pointInWorldWithContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })significantFrameWithCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointToDropAtForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)animateInWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 delay:(double)arg2 completionHandler:(id)arg3;
- (void)animateFromCoordinate:(struct { double x1; double x2; })arg1 duration:(double)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (struct CGPoint { double x1; double x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
- (struct CGPoint { double x1; double x2; })calloutOffset;
- (id)anchorWithContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setDragState:(long long)arg1 animated:(bool)arg2;
- (bool)followsTerrain;
- (struct { double x1; double x2; })presentationCoordinate;
- (bool)canAnimateIn;
- (struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })styleTransitionState;
- (void)setStyleTransitionState:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })arg1;
- (bool)canShowCallout;
- (void)setFollowsTerrain:(bool)arg1;
- (void)setDragState:(long long)arg1;
- (void)setCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (long long)dragState;
- (void)setCanShowCallout:(bool)arg1;
- (bool)isDraggable;
- (void)setHidden:(bool)arg1;
- (void)setDraggable:(bool)arg1;
- (id)title;
- (bool)hidden;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id).cxx_construct;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnnotation:(id)arg1;
- (id)annotation;
- (bool)isPersistent;
- (id)subtitle;
- (void)setTracking:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)prepareForReuse;
- (bool)isSelected;
- (id)reuseIdentifier;
- (bool)isTracking;
- (void)_setHiddenForOffscreen:(bool)arg1;
- (id)detailCalloutAccessoryView;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (id)rightCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (id)leftCalloutAccessoryView;
- (void)setLeftCalloutAccessoryView:(id)arg1;

@end
