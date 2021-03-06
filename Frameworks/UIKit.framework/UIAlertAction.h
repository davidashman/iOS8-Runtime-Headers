/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIAlertActionRepresenting>, NSString, UIAlertController, UIImage;

@interface UIAlertAction : NSObject <NSCopying> {
    NSString *_title;
    bool_enabled;
    bool_checked;
    bool__isDefault;
    long long _style;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _simpleHandler;

    UIImage *_image;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shouldDismissHandler;

    NSString *__descriptiveText;
    <_UIAlertActionRepresenting> *__representer;
    UIAlertController *__alertController;
}

@property(copy) NSString * title;
@property long long style;
@property(getter=isEnabled) bool enabled;
@property(copy) id handler;
@property(copy) id simpleHandler;
@property(retain) UIImage * image;
@property(copy) id shouldDismissHandler;
@property(setter=_setDescriptiveText:,copy) NSString * _descriptiveText;
@property(setter=_setRepresenter:) <_UIAlertActionRepresenting> * _representer;
@property(setter=_setIsDefault:) bool _isDefault;
@property(setter=_setAlertController:) UIAlertController * _alertController;

+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(id)arg5 shouldDismissHandler:(id)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id)arg4 shouldDismissHandler:(id)arg5;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id)arg3;

- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setHandler:(id)arg1;
- (id)handler;
- (long long)style;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_setRepresenter:(id)arg1;
- (id)_representer;
- (id)_descriptiveText;
- (bool)_isChecked;
- (bool)_isDefault;
- (void)_setIsDefault:(bool)arg1;
- (void)_setChecked:(bool)arg1;
- (void)_setDescriptiveText:(id)arg1;
- (id)_alertController;
- (id)simpleHandler;
- (id)shouldDismissHandler;
- (void)setShouldDismissHandler:(id)arg1;
- (void)setSimpleHandler:(id)arg1;
- (void)_setAlertController:(id)arg1;

@end
