/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    FCAssetManager * _assetManager;
    NSString * _contentStoreFrontID;
    <FCTagsFetchOperationDelegate> * _delegate;
    FCHeldRecords * _heldChildTagRecords;
    FCHeldRecords * _heldTagRecords;
    bool  _includeChildren;
    NSArray * _tagIDs;
    FCTagRecordSource * _tagRecordSource;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, copy) NSString *contentStoreFrontID;
@property (nonatomic) <FCTagsFetchOperationDelegate> *delegate;
@property (nonatomic, retain) FCHeldRecords *heldChildTagRecords;
@property (nonatomic, retain) FCHeldRecords *heldTagRecords;
@property (nonatomic) bool includeChildren;
@property (nonatomic, copy) NSArray *tagIDs;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;

- (void).cxx_destruct;
- (id)assetManager;
- (id)completeFetchOperation;
- (id)contentStoreFrontID;
- (id)delegate;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)arg1;
- (id)heldChildTagRecords;
- (id)heldTagRecords;
- (bool)includeChildren;
- (id)initWithTagIDs:(id)arg1 contentStoreFrontID:(id)arg2 tagRecordSource:(id)arg3 assetManager:(id)arg4 delegate:(id)arg5;
- (void)setAssetManager:(id)arg1;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeldChildTagRecords:(id)arg1;
- (void)setHeldTagRecords:(id)arg1;
- (void)setIncludeChildren:(bool)arg1;
- (void)setTagIDs:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (id)tagIDs;
- (id)tagRecordSource;

@end
