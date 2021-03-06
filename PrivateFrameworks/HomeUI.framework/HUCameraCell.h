/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraCell : UICollectionViewCell <HMCameraSnapshotControlDelegate, HUGridCellProtocol> {
    UIView * _cameraBackgroundView;
    NSArray * _cameraCellConstraints;
    HUCameraContainerView * _cameraContainerView;
    bool  _cellContentsHidden;
    HFItem * _item;
    HUGridCameraCellLayoutOptions * _layoutOptions;
    UILabel * _snapshotDateLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *cameraBackgroundView;
@property (nonatomic, retain) NSArray *cameraCellConstraints;
@property (nonatomic, retain) HUCameraContainerView *cameraContainerView;
@property (getter=areCellContentsHidden, nonatomic) bool cellContentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCameraCellLayoutOptions *layoutOptions;
@property (getter=isRearranging, nonatomic) bool rearranging;
@property (nonatomic, retain) UILabel *snapshotDateLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (bool)areCellContentsHidden;
- (id)cameraBackgroundView;
- (id)cameraCellConstraints;
- (id)cameraContainerView;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (id)cameraSnapshotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setCameraBackgroundView:(id)arg1;
- (void)setCameraCellConstraints:(id)arg1;
- (void)setCameraContainerView:(id)arg1;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setSnapshotDateLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)snapshotDateLabel;
- (void)startCameraSnapshots;
- (void)stopCameraSnapshots;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
