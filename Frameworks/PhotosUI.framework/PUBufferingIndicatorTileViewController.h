/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver> {
    bool  __shouldShowIndeterminateActivityIndicator;
    UIActivityIndicatorView * __spinner;
    PUBrowsingVideoPlayer * __videoPlayer;
    PUAssetViewModel * _assetViewModel;
}

@property (setter=_setShouldShowIndeterminateActivityIndicator:, nonatomic) bool _shouldShowIndeterminateActivityIndicator;
@property (setter=_setSpinner:, nonatomic, retain) UIActivityIndicatorView *_spinner;
@property (setter=_setVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })bufferingIndicatorTileSize;
+ (bool)canShowBufferingIndicatorTileForAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_setShouldShowIndeterminateActivityIndicator:(bool)arg1;
- (void)_setShouldShowIndeterminateActivityIndicator:(bool)arg1 animated:(bool)arg2;
- (void)_setSpinner:(id)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (bool)_shouldShowIndeterminateActivityIndicator;
- (id)_spinner;
- (void)_updateIndicator;
- (id)_videoPlayer;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)setAssetViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
