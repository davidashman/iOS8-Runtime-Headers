/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKRealisticPolygonMaker;

@interface VKRealisticRoadGroup : NSObject  {
    struct VKTileKey { 
        unsigned int z; 
        int x; 
        int y; 
        unsigned int pointSize; 
    } _tileKey;
    int _renderZ;
    VKRealisticPolygonMaker *_roadPolygonMaker;
    float _roadZ;
    float _casingHeight;
    float _casingWidth;
    float _casingTopLift;
    float _sidewalkShadowWidth;
    float _casingShadowWidth;
    float _casingShadowLift;
    float _roadShadowRamp;
    float _roadShadowWidth;
    float _roadShadowTaperLength;
    struct shared_ptr<md::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _styleQuery;
    float _casingShadowRamp;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _roadDrawableIndices;
    struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__begin_; 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__end_; 
        struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
            struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__first_; 
        } __end_cap_; 
    } _roadDrawables;
    struct fast_shared_ptr<ggl::PolygonBase::CompressedMeshMesh> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _topMesh;
    struct fast_shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _facadeMesh;
    struct fast_shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _shadowMesh;
    struct fast_shared_ptr<ggl::PolygonBase::CompressedMeshMesh> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _sidewalkShadowMesh;
    struct fast_shared_ptr<ggl::RealisticRoadShadow::RealisticMesh> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _roadShadowMesh;
}

@property int renderZ;
@property(readonly) float roadShadowRamp;
@property(readonly) float roadShadowWidth;
@property(readonly) float roadShadowTaperLength;
@property struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; } styleQuery;
@property(readonly) float casingShadowRamp;
@property(readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::unique_ptr<md::TexturedDrawable' */ struct * roadMeshDrawables; /* unknown property attribute:  std::__1::default_delete<md::TexturedDrawable> >}}} */
@property(readonly) struct * casingShadowMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData>=^{RealisticVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * casingFacadeMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData>=^{RealisticVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * casingTopMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::PolygonBase::CompressedMeshVertexData>=^{CompressedMeshVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * casingSidewalkShadowMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::PolygonBase::CompressedMeshVertexData>=^{CompressedMeshVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * roadShadowMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::RealisticRoadShadow::RealisticVertexData>=^{RealisticVertexData}^{__shared_weak_count}}} */


- (struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x1; struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x2; struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x_3_1_1; } x3; }*)roadMeshDrawables;
- (float)casingShadowRamp;
- (void)setStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQuery;
- (float)roadShadowTaperLength;
- (float)roadShadowWidth;
- (float)roadShadowRamp;
- (void)setRenderZ:(int)arg1;
- (int)renderZ;
- (void)updateComponentsWithContentScale:(double)arg1 sharedResources:(id)arg2;
- (void)addRoadForPolygon:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 pointCount:(unsigned long long)arg2 characteristicPoints:(const struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; boolx_2_1_4; boolx_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)arg3 characteristicPointCount:(unsigned long long)arg4 withStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (struct RealisticMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::RealisticRoadShadow::RealisticVertexData> { struct RealisticVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)roadShadowMesh;
- (struct CompressedMeshMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::PolygonBase::CompressedMeshVertexData> { struct CompressedMeshVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)casingSidewalkShadowMesh;
- (struct CompressedMeshMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::PolygonBase::CompressedMeshVertexData> { struct CompressedMeshVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)casingTopMesh;
- (struct RealisticMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData> { struct RealisticVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)casingFacadeMesh;
- (struct RealisticMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData> { struct RealisticVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)casingShadowMesh;
- (id)initWithTile:(id)arg1;
- (void)extractRoadPolygonWithPoints:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 pointCount:(unsigned long long)arg2 indices:(const unsigned short*)arg3 indexCount:(unsigned long long)arg4 styleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg5 contentScale:(double)arg6 sharedResources:(id)arg7;
- (struct TexturedDrawable { struct unique_ptr<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> > > { struct __compressed_pair<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> *, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> > > { struct MeshVendor<ggl::PolygonBase::CompressedMeshMesh> {} *x_1_2_1; } x_1_1_1; } x1; struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > > { struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_2_1_1; struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_2_1_2; struct __compressed_pair<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > > { struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; id x6; struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*)_meshForStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg1 scale:(double)arg2 sharedResources:(id)arg3;
- (void)extractShadowsWithPoints:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 count:(unsigned long long)arg2;
- (void)extractLinesWithPoints:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
