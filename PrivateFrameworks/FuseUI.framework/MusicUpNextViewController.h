/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextViewController : UIViewController <MusicClientContextConsuming, MusicUpNextAggregateDataSourceDelegate, MusicUpNextNowPlayingLockupViewDelegate, MusicUpNextTableViewDelegate, UITableViewDataSource, UIViewControllerTransitioningDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _appliedEdgeInsets;
    MusicClientContext * _clientContext;
    MusicUpNextAggregateDataSource * _dataSource;
    bool  _didMutateWhileLoading;
    UIView * _hairlineView;
    bool  _hidesNowPlaying;
    bool  _ignoreUpdates;
    NSIndexPath * _indexPathForNowPlayingFrame;
    bool  _isReordering;
    UIView * _itemContentViewContainerView;
    bool  _loadingCells;
    MusicUpNextNowPlayingLockupView * _nowPlayingView;
    MusicAVPlayer * _player;
    bool  _shouldDismissImmediately;
    bool  _shouldDismissOnItemChange;
    MusicUpNextTableView * _tableView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) MusicUpNextAggregateDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNowPlaying;
@property (nonatomic, readonly) UIView *itemContentViewContainerView;
@property (nonatomic, retain) MusicAVPlayer *player;
@property (nonatomic) bool shouldDismissImmediately;
@property (nonatomic, readonly) bool shouldDismissOnItemChange;
@property (readonly) Class superclass;

+ (id)upNextViewControllerWithPlayer:(id)arg1;

- (void).cxx_destruct;
- (void)_dismissUpNext;
- (double)_maximumRowHeight;
- (void)_playlistManagerDisableUserQueueModifcationsDidChange:(id)arg1;
- (void)_preferredContentSizeDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForNowPlayingAndQueue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForQueue;
- (void)_reloadNowPlayingView;
- (id)_translateTableViewUpdatesToMoveIfPossible:(id)arg1;
- (void)_updateTableViewInsets;
- (void)aggregateDataSource:(id)arg1 didUpdate:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)clientContext;
- (id)contentScrollView;
- (id)dataSource;
- (void)dealloc;
- (bool)hidesNowPlaying;
- (id)initWithDataSource:(id)arg1;
- (id)itemContentViewContainerView;
- (void)nowPlayingLockupView:(id)arg1 touchEnded:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)player;
- (void)prepareForDismissal;
- (void)setClientContext:(id)arg1;
- (void)setHidesNowPlaying:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setShouldDismissImmediately:(bool)arg1;
- (bool)shouldDismissImmediately;
- (bool)shouldDismissOnItemChange;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 pinView:(id)arg2 didUpdatePinLocation:(long long)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end