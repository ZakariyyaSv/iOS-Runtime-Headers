/* Generated by RuntimeBrowser.
 */

@protocol TPDialerKeypadProtocol <NSObject>

@required

- (void)highlightKeyAtIndex:(int)arg1;
- (int)indexForHighlightedKey;
- (void)setDelegate:(id <TPDialerKeypadDelegate>)arg1;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)setSupportsHardPause:(BOOL)arg1;
- (BOOL)supportsHardPause;

@optional

- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(unsigned int)arg2;

@end