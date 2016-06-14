/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction> {
    TSWPChangeSession * _changeSession;
    TSWPSelection * _selection;
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (long long)delta;
- (id)initWithSelection:(id)arg1 string:(id)arg2 changeSession:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder { int (**x1)(); id x2; struct TSWPStorageTransaction {} x3; struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_2_1; struct TSWPStorageTransactionObject {} *x_1_2_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_3_1; } x_1_2_3; } x_4_1_1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_2_1; struct TSWPStorageActionGroup {} *x_2_2_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_3_1; } x_2_2_3; } x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; struct TSWPStorageActionGroup { int x_6_2_1; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_2_3_1; struct TSWPStorageAction {} *x_2_3_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_4_1; } x_2_3_3; } x_6_2_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; struct TSWPStorageAction {} *x_3_3_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_4_1; } x_3_3_3; } x_6_2_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_3_1; struct TSWPStorageAction {} *x_4_3_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_4_1; } x_4_3_3; } x_6_2_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_3_1; struct TSWPStorageAction {} *x_5_3_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_4_1; } x_5_3_3; } x_6_2_5; bool x_6_2_6; struct TSWPMarkers { struct vector<std::__1::pair<unsigned long, unsigned short>, std::__1::allocator<std::__1::pair<unsigned long, unsigned short> > > { struct pair<unsigned long, unsigned short> {} *x_1_4_1; struct pair<unsigned long, unsigned short> {} *x_1_4_2; struct __compressed_pair<std::__1::pair<unsigned long, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned long, unsigned short> > > { struct pair<unsigned long, unsigned short> {} *x_3_5_1; } x_1_4_3; } x_7_3_1; bool x_7_3_2; bool x_7_3_3; bool x_7_3_4; bool x_7_3_5; } x_6_2_7; } x_4_1_6; unsigned int x_4_1_7; unsigned long long x_4_1_8; struct vector<TSWPAttributeArrayKind, std::__1::allocator<TSWPAttributeArrayKind> > { int *x_9_2_1; int *x_9_2_2; struct __compressed_pair<TSWPAttributeArrayKind *, std::__1::allocator<TSWPAttributeArrayKind> > { int *x_3_3_1; } x_9_2_3; } x_4_1_9; struct vector<TSWPStorageChangeRange, std::__1::allocator<TSWPStorageChangeRange> > { struct TSWPStorageChangeRange {} *x_10_2_1; struct TSWPStorageChangeRange {} *x_10_2_2; struct __compressed_pair<TSWPStorageChangeRange *, std::__1::allocator<TSWPStorageChangeRange> > { struct TSWPStorageChangeRange {} *x_3_3_1; } x_10_2_3; } x_4_1_10; struct vector<TSWPStorageParagraphIndexChange, std::__1::allocator<TSWPStorageParagraphIndexChange> > { struct TSWPStorageParagraphIndexChange {} *x_11_2_1; struct TSWPStorageParagraphIndexChange {} *x_11_2_2; struct __compressed_pair<TSWPStorageParagraphIndexChange *, std::__1::allocator<TSWPStorageParagraphIndexChange> > { struct TSWPStorageParagraphIndexChange {} *x_3_3_1; } x_11_2_3; } x_4_1_11; unsigned long long x_4_1_12; unsigned long long x_4_1_13; bool x_4_1_14; id x_4_1_15; bool x_4_1_16; id x_4_1_17; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x_4_1_18; unsigned short x_4_1_19; void*x_4_1_20; void*x_4_1_21; unsigned short x_4_1_22; void*x_4_1_23; out const void*x_4_1_24; void*x_4_1_25; void*x_4_1_26; BOOL x_4_1_27; void*x_4_1_28; int x_4_1_29; out in void*x_4_1_30; void*x_4_1_31; in in void*x_4_1_32; const void*x_4_1_33; struct TSWPStorageActionState {} *x_4_1_34; bool x_4_1_35; } x4; unsigned long long x5; int x6; unsigned int x7; }*)arg3 withFlags:(unsigned int)arg4 replaceBlock:(id /* block */)arg5;
- (unsigned long long)targetCharIndex;

@end