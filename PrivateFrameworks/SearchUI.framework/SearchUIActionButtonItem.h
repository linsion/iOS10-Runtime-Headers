/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIActionButtonItem : NSObject <SearchUIActionButtonItem> {
    unsigned long long  _actionType;
    NSArray * _adamIDs;
    NSString * _bundleID;
    NSString * _contactIdentifier;
    bool  _isOverlay;
    NSString * _label;
    NSString * _labelForLocalMedia;
    NSString * _localMediaIdentifier;
    NSURL * _punchoutURL;
    bool  _requiresLocalMedia;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic, retain) NSArray *adamIDs;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOverlay;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelForLocalMedia;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic, retain) NSURL *punchoutURL;
@property (nonatomic) bool requiresLocalMedia;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)adamIDs;
- (id)bundleID;
- (id)contactIdentifier;
- (bool)isOverlay;
- (id)label;
- (id)labelForLocalMedia;
- (id)localMediaIdentifier;
- (id)punchoutURL;
- (bool)requiresLocalMedia;
- (void)setActionType:(unsigned long long)arg1;
- (void)setAdamIDs:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelForLocalMedia:(id)arg1;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setPunchoutURL:(id)arg1;
- (void)setRequiresLocalMedia:(bool)arg1;

@end