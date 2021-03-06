/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpBarsController : PUBarsController <PUAssetActionPerformerDelegate, PUBarButtonItemCollectionDataSource, PUBrowsingViewModelChangeObserver, PUOverOneUpPresentationSessionBarsDelegate, PUPhotoBrowserTitleViewControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUScrubberViewDelegate, UIPopoverPresentationControllerDelegate> {
    PUAssetActionPerformer * __activeActionPerformer;
    NSDictionary * __cachedDisplayInfoForCurrentAsset;
    NSCache * __cachedDisplayInfosByAssetReference;
    NSObject<OS_dispatch_queue> * __displayInfoLoadingIsolationQueue;
    bool  __isDisplayInfoLoadingScheduled;
    NSMutableIndexSet * __leftNavBarButtonIdentifiers;
    PUBarButtonItemCollection * __leftNavBarButtonItemCollection;
    bool  __needsUpdateChromeVisibility;
    bool  __needsUpdateCommentsTitle;
    bool  __needsUpdateTitle;
    long long  __nextChromeVisibilityUpdateAnimationType;
    bool  __nextCommentsActionShouldBeginEditing;
    PUPlayPauseBarItemsController * __playPauseBarItemsController;
    NSMutableIndexSet * __rightNavBarButtonIdentifiers;
    PUBarButtonItemCollection * __rightNavBarButtonItemCollection;
    PUScrubberView * __scrubberView;
    NSString * __scrubbingIdentifier;
    UITapGestureRecognizer * __tapGestureRecognizer;
    NSString * __title;
    PUPhotoBrowserTitleViewController * __titleViewController;
    NSMutableIndexSet * __toolbarButtonIdentifiers;
    PUBarButtonItemCollection * __toolbarButtonItemCollection;
    bool  _allowTapOnTitle;
    PUBrowsingSession * _browsingSession;
    struct { 
        bool respondsToDidChangeShowingPlayPauseButton; 
        bool respondsToDidTapPlayPauseButton; 
        bool respondsToDidTapTitle; 
        bool respondsToIsAccessoryAvailableForAssetReference; 
        bool respondsToToggleDetailsVisibility; 
        bool respondsToToggleCommentsVisibility; 
        bool respondsToCanShowCommentsForAsset; 
        bool respondsToShouldTapBeginAtLocationFromProvider; 
        bool respondsToShouldHideToolbarWhenShowingAccessoryViewForAssetReference; 
    }  _delegateFlags;
    bool  _isShowingPlayPauseButton;
    double  _maximumToolbarHeight;
    bool  _shouldPlaceButtonsInNavigationBar;
    bool  _shouldShowAirPlayButton;
    bool  _shouldShowDoneButton;
    bool  _shouldShowScrubber;
    bool  _shouldShowTitleView;
    bool  _shouldUseCompactCommentsTitle;
    bool  _shouldUseCompactTitleView;
}

@property (setter=_setActiveActionPerformer:, nonatomic, retain) PUAssetActionPerformer *_activeActionPerformer;
@property (setter=_setCachedDisplayInfoForCurrentAsset:, nonatomic, copy) NSDictionary *_cachedDisplayInfoForCurrentAsset;
@property (nonatomic, readonly) NSCache *_cachedDisplayInfosByAssetReference;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_displayInfoLoadingIsolationQueue;
@property (setter=_setDisplayInfoLoadingScheduled:, nonatomic) bool _isDisplayInfoLoadingScheduled;
@property (setter=_setLeftNavBarButtonIdentifiers:, nonatomic, retain) NSMutableIndexSet *_leftNavBarButtonIdentifiers;
@property (setter=_setLeftNavBarButtonItemCollection:, nonatomic, retain) PUBarButtonItemCollection *_leftNavBarButtonItemCollection;
@property (setter=_setNeedsUpdateChromeVisibility:, nonatomic) bool _needsUpdateChromeVisibility;
@property (setter=_setNeedsUpdateCommentsTitle:, nonatomic) bool _needsUpdateCommentsTitle;
@property (setter=_setNeedsUpdateTitle:, nonatomic) bool _needsUpdateTitle;
@property (setter=_setNextChromeVisibilityUpdateAnimationType:, nonatomic) long long _nextChromeVisibilityUpdateAnimationType;
@property (setter=_setNextCommentsActionShouldBeginEditing:, nonatomic) bool _nextCommentsActionShouldBeginEditing;
@property (nonatomic, readonly) PUPlayPauseBarItemsController *_playPauseBarItemsController;
@property (setter=_setRightNavBarButtonIdentifiers:, nonatomic, retain) NSMutableIndexSet *_rightNavBarButtonIdentifiers;
@property (setter=_setRightNavBarButtonItemCollection:, nonatomic, retain) PUBarButtonItemCollection *_rightNavBarButtonItemCollection;
@property (nonatomic, readonly) PUScrubberView *_scrubberView;
@property (nonatomic, readonly) NSString *_scrubbingIdentifier;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTitle:, nonatomic, copy) NSString *_title;
@property (nonatomic, readonly) PUPhotoBrowserTitleViewController *_titleViewController;
@property (setter=_setToolbarButtonIdentifiers:, nonatomic, retain) NSMutableIndexSet *_toolbarButtonIdentifiers;
@property (setter=_setToolbarButtonItemCollection:, nonatomic, retain) PUBarButtonItemCollection *_toolbarButtonItemCollection;
@property (nonatomic) bool allowTapOnTitle;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpBarsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setShowingPlayPauseButton:, nonatomic) bool isShowingPlayPauseButton;
@property (nonatomic) double maximumToolbarHeight;
@property (nonatomic, readonly) UIView *ppt_scrubberView;
@property (nonatomic) bool shouldPlaceButtonsInNavigationBar;
@property (nonatomic) bool shouldShowAirPlayButton;
@property (nonatomic) bool shouldShowDoneButton;
@property (nonatomic) bool shouldShowScrubber;
@property (nonatomic) bool shouldShowTitleView;
@property (nonatomic) bool shouldUseCompactCommentsTitle;
@property (nonatomic) bool shouldUseCompactTitleView;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_activeActionPerformer;
- (id)_activeBarButtonItemForIdentifier:(long long)arg1;
- (id)_barButtonItemCollectionForLocation:(long long)arg1;
- (id)_barButtonItemForActionType:(unsigned long long)arg1;
- (id)_barButtonItemForIdentifier:(long long)arg1 location:(long long)arg2;
- (void)_browsingViewModel:(id)arg1 didChange:(id)arg2;
- (id)_cachedDisplayInfoForCurrentAsset;
- (id)_cachedDisplayInfosByAssetReference;
- (bool)_canShowCommentsForCurrentAsset;
- (void)_didLoadDisplayInfo:(id)arg1 forAssetReference:(id)arg2;
- (id)_displayInfoLoadingIsolationQueue;
- (void)_executeActionPerformer:(id)arg1;
- (void)_executeActionPerformer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleAssetViewModelBeginEditingTimer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (long long)_identifierForButton:(id)arg1;
- (void)_initializeBarButtonItemCollections;
- (void)_invalidateChromeVisibilityWithAnimationType:(long long)arg1;
- (void)_invalidateCommentsTitle;
- (void)_invalidateScrubber;
- (void)_invalidateTitle;
- (bool)_isDisplayInfoLoadingScheduled;
- (id)_leftNavBarButtonIdentifiers;
- (id)_leftNavBarButtonItemCollection;
- (void)_loadDisplayInfoForCurrentAsset;
- (long long)_locationForBarButtonItemCollection:(id)arg1;
- (long long)_locationForBarButtonItemWithIdentifier:(long long)arg1;
- (bool)_needsUpdateChromeVisibility;
- (bool)_needsUpdateCommentsTitle;
- (bool)_needsUpdateTitle;
- (id)_newBarButtonItemWithIdentifier:(long long)arg1 location:(long long)arg2;
- (id)_newBarButtonItemWithImageName:(id)arg1 offset:(struct UIOffset { double x1; double x2; })arg2 landscapeImagePhoneName:(id)arg3 offset:(struct UIOffset { double x1; double x2; })arg4 location:(long long)arg5;
- (id)_newBarButtonWithSystemItem:(long long)arg1 offset:(struct UIOffset { double x1; double x2; })arg2 landscapeImagePhoneOffset:(struct UIOffset { double x1; double x2; })arg3;
- (id)_newCustomButtonItem;
- (long long)_nextChromeVisibilityUpdateAnimationType;
- (bool)_nextCommentsActionShouldBeginEditing;
- (void)_performAirPlayAction;
- (void)_performAllPhotosAction;
- (void)_performAssetExplorerReviewScreenActionType:(unsigned long long)arg1;
- (void)_performCancelAction;
- (void)_performDuplicateActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performEditAction;
- (void)_performFavoriteAction:(bool)arg1;
- (void)_performHideActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performLikeAction:(bool)arg1;
- (void)_performPlayPauseAction:(long long)arg1;
- (void)_performRestoreAction;
- (void)_performReviewAction;
- (void)_performShareAction;
- (void)_performSlideShowAction;
- (void)_performToggleCommentsAction;
- (void)_performToggleDetailsAction;
- (void)_performTrashAction;
- (id)_playPauseBarItemsController;
- (void)_resetIdentifierIndexes;
- (id)_rightNavBarButtonIdentifiers;
- (id)_rightNavBarButtonItemCollection;
- (long long)_scrubberType;
- (id)_scrubberView;
- (id)_scrubbingIdentifier;
- (void)_setActiveActionPerformer:(id)arg1;
- (void)_setCachedDisplayInfoForCurrentAsset:(id)arg1;
- (void)_setDisplayInfoLoadingScheduled:(bool)arg1;
- (void)_setLeftNavBarButtonIdentifiers:(id)arg1;
- (void)_setLeftNavBarButtonItemCollection:(id)arg1;
- (void)_setNeedsUpdateChromeVisibility:(bool)arg1;
- (void)_setNeedsUpdateCommentsTitle:(bool)arg1;
- (void)_setNeedsUpdateTitle:(bool)arg1;
- (void)_setNextChromeVisibilityUpdateAnimationType:(long long)arg1;
- (void)_setNextCommentsActionShouldBeginEditing:(bool)arg1;
- (void)_setRightNavBarButtonIdentifiers:(id)arg1;
- (void)_setRightNavBarButtonItemCollection:(id)arg1;
- (void)_setShowingPlayPauseButton:(bool)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setToolbarButtonIdentifiers:(id)arg1;
- (void)_setToolbarButtonItemCollection:(id)arg1;
- (id)_tapGestureRecognizer;
- (id)_title;
- (id)_titleViewController;
- (id)_toolbarButtonIdentifiers;
- (id)_toolbarButtonItemCollection;
- (void)_toolbarViewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateChromeVisibilityIfNeeded;
- (void)_updateCommentsTitleIfNeeded;
- (void)_updateIdentifiersIndexesWithIdentifier:(long long)arg1 location:(long long)arg2 shouldEnable:(bool)arg3;
- (void)_updateScrubberViewIfNeeded;
- (void)_updateShowingPlayPauseButton;
- (void)_updateTitleIfNeeded;
- (bool)_wantsChromeVisible;
- (bool)allowTapOnTitle;
- (void)assetActionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)barButtonItemCollection:(id)arg1 newBarButtonItemForIdentifier:(long long)arg2;
- (void)barButtonItemTapped:(id)arg1;
- (id)browsingSession;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidateViewControllerView;
- (bool)isShowingPlayPauseButton;
- (double)maximumToolbarHeight;
- (id)overOneUpPresentationSession:(id)arg1 barButtonItemForActivityType:(id)arg2;
- (void)overOneUpPresentationSession:(id)arg1 didCompleteWithActivityType:(id)arg2 assetsByAssetCollection:(id)arg3 success:(bool)arg4;
- (void)photoBrowserTitleViewControllerTapped:(id)arg1;
- (void)playPauseBarItemsController:(id)arg1 didChange:(id)arg2;
- (void)ppt_performAction:(unsigned long long)arg1;
- (id)ppt_scrubberView;
- (long long)preferredBarStyle;
- (bool)prefersStatusBarHidden;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)scrubberView:(id)arg1 shouldIgnoreHitTest:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (void)setAllowTapOnTitle:(bool)arg1;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumToolbarHeight:(double)arg1;
- (void)setShouldPlaceButtonsInNavigationBar:(bool)arg1;
- (void)setShouldShowAirPlayButton:(bool)arg1;
- (void)setShouldShowDoneButton:(bool)arg1;
- (void)setShouldShowScrubber:(bool)arg1;
- (void)setShouldShowTitleView:(bool)arg1;
- (void)setShouldUseCompactCommentsTitle:(bool)arg1;
- (void)setShouldUseCompactTitleView:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldPlaceButtonsInNavigationBar;
- (bool)shouldShowAirPlayButton;
- (bool)shouldShowDoneButton;
- (bool)shouldShowScrubber;
- (bool)shouldShowTitleView;
- (bool)shouldTapBeginAtLocationFromProvider:(id)arg1;
- (bool)shouldUseCompactCommentsTitle;
- (bool)shouldUseCompactTitleView;
- (id)subtitle;
- (id)tapGestureRecognizer;
- (id)title;
- (void)updateBars;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (bool)wantsNavigationBarVisible;
- (bool)wantsToolbarVisible;

@end
