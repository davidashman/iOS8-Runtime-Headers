/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString, NSURL, DOMFileList;

@interface DOMHTMLInputElement : DOMHTMLElement  {
}

@property(copy) NSString * accept;
@property(copy) NSString * alt;
@property bool autofocus;
@property bool defaultChecked;
@property bool checked;
@property bool disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(retain) DOMFileList * files;
@property bool indeterminate;
@property int maxLength;
@property bool multiple;
@property(copy) NSString * name;
@property bool readOnly;
@property(copy) NSString * size;
@property(copy) NSString * src;
@property(copy) NSString * type;
@property(copy) NSString * defaultValue;
@property(copy) NSString * value;
@property(readonly) bool willValidate;
@property int selectionStart;
@property int selectionEnd;
@property(copy) NSString * align;
@property(copy) NSString * useMap;
@property(copy) NSString * accessKey;
@property(copy,readonly) NSString * altDisplayString;
@property(copy,readonly) NSURL * absoluteImageURL;


- (void)setReadOnly:(bool)arg1;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (unsigned int)width;
- (void)setName:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
- (void)setValueForUser:(id)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)stepDown:(int)arg1;
- (void)stepUp:(int)arg1;
- (void)setIncremental:(bool)arg1;
- (bool)incremental;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
- (void)setSelectionEnd:(int)arg1;
- (int)selectionEnd;
- (void)setSelectionStart:(int)arg1;
- (int)selectionStart;
- (void)setValueAsNumber:(double)arg1;
- (void)setValueAsDate:(double)arg1;
- (double)valueAsDate;
- (void)setStep:(id)arg1;
- (void)setRequired:(bool)arg1;
- (bool)required;
- (void)setPattern:(id)arg1;
- (void)setMultiple:(bool)arg1;
- (void)setMin:(id)arg1;
- (id)min;
- (bool)indeterminate;
- (void)setFiles:(id)arg1;
- (id)files;
- (void)setDirName:(id)arg1;
- (id)dirName;
- (bool)checked;
- (void)setDefaultChecked:(bool)arg1;
- (bool)defaultChecked;
- (void)setAccept:(id)arg1;
- (id)accept;
- (id)altDisplayString;
- (void)setUseMap:(id)arg1;
- (id)useMap;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(bool)arg1;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
- (void)setSrc:(id)arg1;
- (id)src;
- (void)click;
- (void)setCustomValidity:(id)arg1;
- (bool)checkValidity;
- (id)labels;
- (id)validationMessage;
- (id)validity;
- (bool)willValidate;
- (void)setFormTarget:(id)arg1;
- (id)formTarget;
- (void)setFormNoValidate:(bool)arg1;
- (bool)formNoValidate;
- (void)setFormMethod:(id)arg1;
- (id)formMethod;
- (void)setFormEnctype:(id)arg1;
- (id)formEnctype;
- (void)setFormAction:(id)arg1;
- (id)formAction;
- (void)setAutofocus:(bool)arg1;
- (bool)autofocus;
- (void)setAlt:(id)arg1;
- (id)alt;
- (void)setAlign:(id)arg1;
- (id)align;
- (void)setAccessKey:(id)arg1;
- (id)accessKey;
- (void)_setAutofilled:(bool)arg1;
- (bool)_isAutofilled;
- (id)step;
- (void)setDisabled:(bool)arg1;
- (void)setSize:(id)arg1;
- (void)select;
- (id)name;
- (void)setType:(id)arg1;
- (id)type;
- (id)size;
- (id)pattern;
- (id)max;
- (void)setMax:(id)arg1;
- (double)valueAsNumber;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (void)setValueWithChangeEvent:(id)arg1;
- (void)setIndeterminate:(bool)arg1;
- (int)structuralComplexityContribution;
- (bool)_isEdited;
- (bool)readOnly;
- (bool)multiple;
- (bool)disabled;
- (id)placeholder;
- (id)absoluteImageURL;
- (bool)_isTextField;
- (bool)autocorrect;
- (int)_autocapitalizeType;
- (id)form;
- (void)setPlaceholder:(id)arg1;
- (void)setChecked:(bool)arg1;
- (id)endPosition;
- (id)startPosition;
- (void)_setAutofilled:(bool)arg1;
- (id)createPeripheral;
- (bool)isEditing;
- (id)text;
- (id)textInputTraits;
- (long long)keyboardType;
- (bool)isSecure;
- (bool)isTextControl;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isLikelyToBeginPageLoad;
- (bool)nodeCanBecomeFirstResponder;
- (bool)isAssistedDateType;
- (id)_textFormElement;
- (void)_accessoryClear;
- (bool)_supportsAccessoryClear;
- (bool)_supportsAutoFill;
- (bool)_requiresInputView;
- (bool)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;

@end
