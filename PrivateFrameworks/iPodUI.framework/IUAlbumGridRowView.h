/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUAlbumGridCellContext, IUAlbumGridRowCell, NSMutableIndexSet, NSMutableArray;

@interface IUAlbumGridRowView : UIView {
    IUAlbumGridRowCell *_cell;
    IUAlbumGridCellContext *_context;
    NSMutableArray *_deleteButtons;
    NSMutableIndexSet *_hiddenAlbumIndexes;
    NSMutableArray *_imageRequests;
    NSMutableArray *_imageViews;
    unsigned int _nowPlayingQueryIndex;
    unsigned int _rowIndex;
}

@property(readonly) float _interItemPadding;
@property IUAlbumGridRowCell * cell;
@property(retain) IUAlbumGridCellContext * context;
@property(readonly) NSMutableIndexSet * hiddenAlbumIndexes;
@property unsigned int rowIndex;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_actualImageFrameForImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_canDrawContent;
- (void)_cancelImageRequests;
- (void)_deleteButtonPressed:(id)arg1;
- (void)_getSubtitleString:(id*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 withFont:(id)arg3 forEntityIndex:(unsigned int)arg4;
- (void)_getTitleValue:(id*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 withFont:(id)arg3 forEntityIndex:(unsigned int)arg4;
- (float)_interItemPadding;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_loadImageForQueryIndex:(unsigned int)arg1 createTitle:(BOOL)arg2;
- (id)_newImageRequestForMediaItem:(id)arg1;
- (void)_updateNowPlayingIndicator;
- (unsigned int)albumIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)cell;
- (id)context;
- (void)dealloc;
- (void)dimAlbum:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)disableDeleteButtons;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableDeleteButtonForAlbumAtIndex:(unsigned int)arg1;
- (void)enableDeleteButtons;
- (id)hiddenAlbumIndexes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)refreshImages;
- (unsigned int)rowAlbumIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)rowIndex;
- (id)scriptingInfoWithChildren;
- (void)setAlbumHidden:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)setCell:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setRowIndex:(unsigned int)arg1;
- (void)setTitlesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbnailFrameForAlbumAtIndex:(unsigned int)arg1;
- (id)thumbnailImageForAlbumAtIndex:(unsigned int)arg1;
- (void)unhideAlbums;

@end