/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource, NSMutableDictionary, ABUIPerson;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
    NSMutableDictionary *_currentImageData;
    ABUIPerson *_personForImageData;
    bool_hasImageChanges;
    bool_didChangePreferredPersonForImage;
    ABPersonTableViewDataSource *_dataSource;
}

@property ABPersonTableViewDataSource * dataSource;


- (id)people;
- (bool)didChangePreferredPersonForImage;
- (void)updateRecordImages;
- (bool)hasImageChanges;
- (void)imageWillSave;
- (void)resetImageData;
- (void)setCurrentImageData:(id)arg1;
- (void)reloadImageData;
- (id)personForImageDataExcludingPeople:(id)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(id)arg2;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3 isRemoved:(bool*)arg4;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forPerson:(id)arg4;
- (void)removeImageDataForPerson:(id)arg1;
- (void)refreshImageData;
- (void)setPersonForImageData:(id)arg1;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3;
- (id)personForImageData;
- (bool)hasImageDataForPerson:(id)arg1;
- (id)writablePeople;
- (id)currentImageData;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;

@end
