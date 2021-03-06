/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPParagraph, NSMutableArray;

@interface CPParagraphFlow : NSObject  {
    CPParagraph *paragraph;
    double fLeft;
    double fRight;
    double fTop;
    double fBottom;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    boolplaced;
    booladjacentToCallout;
    int calloutType;
    CPParagraph *nextInColumn;
}

@property(retain) CPParagraph * paragraph;
@property CPParagraph * nextInColumn;
@property double fLeft;
@property double fRight;
@property double fBottom;
@property bool placed;
@property int calloutType;


- (id)nextInColumn;
- (void)setFBottom:(double)arg1;
- (double)fBottom;
- (void)setFRight:(double)arg1;
- (double)fRight;
- (void)setFLeft:(double)arg1;
- (double)fLeft;
- (void)setParagraph:(id)arg1;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (void)removeFromAbove:(id)arg1;
- (void)removeFromBelow:(id)arg1;
- (id)belowTwoSides:(unsigned int)arg1;
- (id)twoSides:(unsigned int)arg1;
- (id)ignoreCallouts:(unsigned int)arg1;
- (id)simpleRule:(unsigned int)arg1;
- (void)setNextInColumn:(id)arg1;
- (id)paragraphsBelow;
- (int)inOrder:(bool)arg1;
- (bool)intervalOverlapTop:(double)arg1 bottom:(double)arg2 paragraphs:(id)arg3;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 rects:(id)arg3;
- (bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (id)nextParagraphInColumn:(id)arg1;
- (void)setPlaced:(bool)arg1;
- (bool)placed;
- (long long)topDescending:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (void)setParagraphsAboveIn:(id)arg1;
- (id)initWithParagraph:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })belowBounds;
- (int)calloutType;
- (id)paragraphsAbove;
- (double)dAbove;
- (double)dBelow;
- (id)paragraphsRight;
- (id)paragraphsLeft;
- (void)setCalloutType:(int)arg1;
- (id)paragraph;
- (int)inOrder;
- (int)outOrder;
- (double)area;
- (void)dealloc;
- (id)description;
- (int)rightOrder;
- (int)leftOrder;

@end
