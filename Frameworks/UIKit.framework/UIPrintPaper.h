/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaper : NSObject  {
    BOOL _landscape;
    id _internal;
}

@property(readonly) struct CGSize { float width; float height; } paperSize;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } printableRect;
@property BOOL landscape;

+ (id)_paperListForPrinter:(id)arg1 withDuplexMode:(int)arg2;
+ (id)_defaultPaperForOuptutType:(int)arg1;
+ (id)bestPaperForPageSize:(struct CGSize { float x1; float x2; })arg1 withPapersFromArray:(id)arg2;

- (id)_initWithPrintKitPaper:(id)arg1;
- (void)_updatePKPaper:(id)arg1;
- (struct CGSize { float x1; float x2; })paperSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printableRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_printableRectForDuplex:(BOOL)arg1;
- (id)_pkPaper;
- (void)setLandscape:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printRect;
- (BOOL)landscape;
- (void)dealloc;

@end