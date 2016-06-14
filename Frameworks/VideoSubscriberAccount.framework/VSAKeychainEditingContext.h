/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAKeychainEditingContext : NSObject {
    NSMutableSet * _items;
}

@property (nonatomic, readonly) NSSet *deletedItems;
@property (nonatomic, readonly) NSSet *insertedItems;
@property (nonatomic, retain) NSMutableSet *items;
@property (nonatomic, readonly) NSSet *registeredItems;
@property (nonatomic, readonly) NSSet *updatedItems;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_createQueryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateErrors:(id)arg1 withResult:(int)arg2 affectingItem:(id)arg3;
- (void)_populateQuery:(struct __CFDictionary { }*)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (void)_populateResult:(id)arg1 withItemOfKind:(id)arg2 fromMatch:(struct __CFDictionary { }*)arg3;
- (void)_populateUserInfoDictionary:(id)arg1 withSecErrorCode:(int)arg2;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)deletedItems;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)insertItem:(id)arg1;
- (id)insertedItems;
- (id)items;
- (id)registeredItems;
- (bool)save:(id*)arg1;
- (void)setItems:(id)arg1;
- (id)updatedItems;

@end