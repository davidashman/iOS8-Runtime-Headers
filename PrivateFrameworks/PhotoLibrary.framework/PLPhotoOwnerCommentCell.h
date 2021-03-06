/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSAttributedString, UIView;

@interface PLPhotoOwnerCommentCell : UITableViewCell  {
    NSAttributedString *_ownerString;
    UILabel *_ownerContentLabel;
    UIView *_styledSeparatorView;
}

@property(copy) NSAttributedString * ownerString;
@property(retain,readonly) UILabel * ownerContentLabel;
@property(retain,readonly) UIView * styledSeparatorView;

+ (id)_ownerStringForAsset:(id)arg1;
+ (double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;

- (id)styledSeparatorView;
- (id)ownerContentLabel;
- (id)ownerString;
- (void)setOwnerString:(id)arg1;
- (void)updateContentFromAsset:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
