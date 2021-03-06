/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
    CALayer *_bottomGrabber;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _boundsInPDFSpace;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentTrackingRect;
    struct CGColor { } *_grabberColor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialRect;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialSelectionPointOnPage;
    CALayer *_leftGrabber;
    UIPDFPageView *_pageView;
    CALayer *_rightGrabber;
    CALayer *_selectedGrabber;
    CALayer *_topGrabber;
    BOOL _tracking;
    CAShapeLayer *_trackingBorder;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } currentSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } initialSelectionPointOnPage;
@property (nonatomic) UIPDFPageView *pageView;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })currentSelectionPointOnPage;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)endTracking;
- (void)hide;
- (BOOL)hitTest:(struct CGPoint { float x1; float x2; })arg1 fixedPoint:(struct CGPoint { float x1; float x2; }*)arg2 preceeds:(BOOL*)arg3;
- (id)init;
- (struct CGPoint { float x1; float x2; })initialSelectionPointOnPage;
- (void)layout;
- (id)pageView;
- (void)remove;
- (struct CGPoint { float x1; float x2; })selectedPointFor:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundsInEffectsSpace;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRectangle;
- (void)setPageView:(id)arg1;
- (void)setSelectedGrabber:(unsigned int)arg1;
- (void)setSelectedGrabberPosition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)track:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })viewOffset;

@end
