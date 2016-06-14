/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABGroupMembershipPredicate : ABPredicate {
    NSString * _accountIdentifier;
    void * _group;
    void * _store;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) void*group;
@property (nonatomic) void*store;

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)accountIdentifier;
- (void)dealloc;
- (id)description;
- (void*)group;
- (bool)isValid;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setGroup:(void*)arg1;
- (void)setStore:(void*)arg1;
- (void*)store;

@end