/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersFilteredDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {
    void * _addressBook;
    <ABMembersDataSourceDelegate> * _delegate;
    bool  _isInPopover;
    NSMapTable * _records;
    NSMapTable * _sectionTitles;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) void*addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABMembersDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInPopover;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void)addRecords:(id)arg1 toSection:(long long)arg2;
- (void*)addressBook;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (bool)isInPopover;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)records;
- (void)removeAllRecords;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionArrayAtIndex:(long long)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInPopover:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitle:(id)arg1 forSection:(long long)arg2;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForSection:(long long)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;

@end