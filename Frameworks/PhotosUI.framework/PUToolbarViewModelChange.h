/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUToolbarViewModelChange : PUViewModelChange {
    BOOL  _accessoryViewChanged;
    BOOL  _accessoryViewTopOutsetChanged;
    BOOL  _maximumHeightChanged;
    BOOL  _toolbarItemsChanged;
}

@property (setter=_setAccessoryViewChanged:, nonatomic) BOOL accessoryViewChanged;
@property (setter=_setAccessoryViewTopOutsetChanged:, nonatomic) BOOL accessoryViewTopOutsetChanged;
@property (setter=_setMaximumHeightChanged:, nonatomic) BOOL maximumHeightChanged;
@property (setter=_setToolbarItemsChanged:, nonatomic) BOOL toolbarItemsChanged;

- (void)_setAccessoryViewChanged:(BOOL)arg1;
- (void)_setAccessoryViewTopOutsetChanged:(BOOL)arg1;
- (void)_setMaximumHeightChanged:(BOOL)arg1;
- (void)_setToolbarItemsChanged:(BOOL)arg1;
- (BOOL)accessoryViewChanged;
- (BOOL)accessoryViewTopOutsetChanged;
- (BOOL)hasChanges;
- (BOOL)maximumHeightChanged;
- (BOOL)toolbarItemsChanged;

@end