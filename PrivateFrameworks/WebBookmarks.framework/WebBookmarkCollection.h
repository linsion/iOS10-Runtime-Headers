/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkCollection : NSObject <WBBookmarkProvider, WBDatabaseLockAcquisitorDelegate> {
    WBDatabaseLockAcquisitor * _databaseLockAcquisitor;
    struct sqlite3 { } * _db;
    bool  _dirty;
    int  _favoritesFolderIdentifier;
    struct __CFLocale { } * _locale;
    bool  _merging;
    bool  _readonly;
    WebBookmark * _rootBookmark;
    SafariFetcherServerProxy * _safariFetcherServerProxy;
    WebBookmarkTitleWordTokenizer * _wordTokenizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMerging, nonatomic) bool merging;
@property (readonly) Class superclass;

+ (bool)_bookmarkCollectionSyncAllowed;
+ (id)_currentProcessContainerPath;
+ (bool)_isLockedSync;
+ (bool)_lockSync;
+ (void)_postBookmarksChangedSyncNotification;
+ (void)_postBookmarksChangedSyncNotificationOnSyncQueue;
+ (id)_safariContainerPath;
+ (id)_safariInMemoryChangesFilePath;
+ (id)_safariPreferencesDomain;
+ (id)_syncFlags;
+ (id)_syncLockFileName;
+ (id)_uniqueExternalUUID;
+ (void)_unlockSync;
+ (void)holdLockSync:(const void*)arg1;
+ (bool)isLockedSync;
+ (bool)lockSync;
+ (id)readingListArchivesDirectoryPath;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (id)safariBookmarkCollection;
+ (id)safariDirectoryPath;
+ (void)unholdLockSync:(const void*)arg1;
+ (void)unlockSync;

- (void).cxx_destruct;
- (int)_DAVGeneration;
- (bool)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(int)arg3 orderIndex:(unsigned int)arg4 isFolder:(bool)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(bool)arg8 updateAncestorEntries:(bool)arg9;
- (void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4;
- (bool)_addChildrenOfID:(int)arg1 toCollection:(id)arg2 recursive:(bool)arg3 error:(id*)arg4;
- (bool)_applyInMemoryChangesToDatabasePostChangeNotification:(bool)arg1;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt { }*)arg1 recursive:(bool)arg2 error:(id*)arg3;
- (int)_bookmarkIDForServerID:(id)arg1;
- (id)_bookmarkWithServerID:(id)arg1;
- (id)_bookmarkWithSpecialID:(int)arg1;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (id)_changeList;
- (bool)_childrenOfParentBookmarkAreUnsyncable:(id)arg1;
- (bool)_clearAllDAVSyncData;
- (bool)_clearAllSyncKeys;
- (bool)_clearAllTombstones;
- (void)_clearAndCreateAncestorTable;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (void)_clearCachedFavoritesFolderIdentifier;
- (bool)_clearChangeList;
- (bool)_clearSyncKeysUnderBookmarkID:(int)arg1 isFolder:(bool)arg2;
- (bool)_clearTitleWordsForBookmarkID:(int)arg1;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (void)_createSchema;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2;
- (id)_databaseTitleForSpecialID:(int)arg1;
- (bool)_deleteAncestorTableEntriesForBookmarkID:(int)arg1;
- (bool)_deleteBookmark:(id)arg1 leaveTombstone:(bool)arg2;
- (bool)_deleteBookmark:(id)arg1 postChangeNotification:(bool)arg2 forApplyingInMemoryChanges:(bool)arg3;
- (bool)_deleteRecursively:(int)arg1;
- (bool)_deleteSyncPropertyForKey:(id)arg1;
- (bool)_ensureFolderChildrenCount:(id)arg1;
- (void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateContentsOfBookmarkFolder:(int)arg1 includingSubfolders:(bool)arg2 usingBlock:(id /* block */)arg3;
- (id)_errorForMostRecentSQLiteError;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1;
- (int)_executeSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (int)_favoritesFolderIdentifier;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt { }*)arg1;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2 inParent:(int)arg3;
- (bool)_importBookmarksPlist:(id)arg1;
- (bool)_importSyncAnchorPlist:(id)arg1;
- (id)_inMemoryChangeSet;
- (bool)_incrementDAVGeneration;
- (bool)_incrementGeneration;
- (bool)_indexAllTitleWords;
- (bool)_indexBookmarkID:(int)arg1 title:(id)arg2;
- (bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withAncestorIDs:(id)arg2;
- (bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withParentID:(int)arg2;
- (bool)_insertTombstoneWithServerID:(id)arg1;
- (int)_intFromExecutingSQL:(id)arg1;
- (id)_lazyCreateFrequentlyVisitedSitesBookmark;
- (bool)_markBookmarkID:(int)arg1 added:(bool)arg2;
- (bool)_markBookmarkID:(int)arg1 withSpecialID:(int)arg2;
- (bool)_markSpecialBookmarks;
- (id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(int)arg2;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(int)arg2;
- (bool)_mergeChildrenOfID:(int)arg1 referencingBase:(id)arg2 error:(id*)arg3;
- (bool)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion31ToVersion32;
- (void)_migrateSchemaVersion32ToVersion33;
- (void)_migrateSchemaVersion33ToVersion34;
- (void)_migrateSchemaVersion34ToVersion35;
- (void)_migrateSchemaVersion35ToVersion36;
- (void)_migrateSchemaVersion36ToVersion37;
- (void)_migrateSchemaVersion37ToVersion38;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion9ToVersion10;
- (bool)_migrateToCurrentSchema;
- (bool)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (bool)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (void)_normalizeDatabaseURLs;
- (void)_normalizeSearchString:(struct __CFString { }*)arg1;
- (bool)_openDatabaseAtPath:(id)arg1 checkIntegrity:(bool)arg2 error:(id*)arg3;
- (bool)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (unsigned int)_orderIndexForBookmarkInsertedIntoParent:(int)arg1 insertAtBeginning:(bool)arg2;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1;
- (id)_parentIdentifiersOfBookmarksNeedingIcons;
- (void)_postBookmarksDidReloadNotification;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksFolderContentsDidChangeNotification:(int)arg1;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (struct sqlite3_stmt { }*)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (bool)_primaryCollection;
- (id)_readingListItemsWhere:(id)arg1 filteredBy:(id)arg2;
- (bool)_rebuildAncestorTable;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (bool)_reindexBookmarkID:(int)arg1 title:(id)arg2;
- (void)_rerunMigrationsIfNecessary;
- (bool)_restoreBookmarkBarIfMissing;
- (bool)_restoreMissingSpecialBookmarks;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(bool)arg1;
- (void)_restoreOrMergeWhiteListFolderAndContentsWithWebFilterWhiteList:(id)arg1 ensureChildCount:(bool)arg2 postChangeNotification:(bool)arg3;
- (id)_rootFolderHiddenChildrenClause;
- (id)_safariFetcherServerProxy;
- (bool)_saveBookmark:(id)arg1 startReadingListFetcher:(bool)arg2 forApplyingInMemoryChanges:(bool)arg3;
- (bool)_saveBookmark:(id)arg1 withSpecialID:(int)arg2 updateGenerationIfNeeded:(bool)arg3;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1 returnType:(long long)arg2;
- (id)_serverIDAtOrderIndex:(unsigned int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDForBookmarkID:(int)arg1;
- (id)_serverIDsInFolderWithServerID:(id)arg1;
- (bool)_setServerID:(id)arg1 forBookmark:(id)arg2;
- (bool)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (bool)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (void)_setupInMemoryChangeSet;
- (bool)_setupWithPath:(id)arg1 checkIntegrity:(bool)arg2;
- (bool)_setupWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(bool)arg4;
- (void)_simulateCrashWithDescription:(id)arg1;
- (int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (int)_specialIDForBookmarkTitle:(id)arg1;
- (struct sqlite3_stmt { }*)_sqliteStatementWithQuery:(id)arg1;
- (void)_startReadingListFetcher;
- (bool)_syncAdd:(id)arg1 toParent:(int)arg2 withOrderIndex:(unsigned int)arg3 error:(id*)arg4;
- (id)_syncKeysForServerIDs:(id)arg1;
- (bool)_syncPropertyExistsForKey:(id)arg1;
- (id)_tableExpressionForArchiveMode:(int)arg1;
- (void)_test_preventPeriodicallyApplyingInMemoryChangesToDatabase;
- (bool)_trackChangesInMemoryIfDatabaseWriteIsNotAllowed;
- (bool)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (bool)_updateCachedChildCountForParentID:(int)arg1 inDirection:(int)arg2;
- (bool)_updateHiddenAncestorCountForBookmarksUnderFolderID:(int)arg1 addingOffset:(int)arg2;
- (long long)_userVersion;
- (void)addBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2;
- (bool)applyInMemoryChangesToDatabase;
- (bool)beginSyncTransaction;
- (id)bookmarkAtPath:(id)arg1;
- (bool)bookmarkIsFavoritesFolder:(id)arg1;
- (id)bookmarkWithID:(int)arg1;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarksBarBookmark;
- (id)bookmarksBarList;
- (id)bookmarksDictionary;
- (id)bookmarksMatchingString:(id)arg1;
- (id)bookmarksNeedingIcons;
- (bool)cleanupReadingListArchives;
- (bool)clearAllReadingListArchives;
- (void)clearCarrierBookmarks;
- (bool)clearReadingListArchiveWithUUID:(id)arg1;
- (void)commitSyncTransaction;
- (bool)containsOnlyStockBookmarks;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)databaseHealthInformation;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(bool)arg2;
- (void)dealloc;
- (bool)deleteAllFavoriteIcons;
- (bool)deleteBookmark:(id)arg1;
- (bool)deleteBookmark:(id)arg1 postChangeNotification:(bool)arg2;
- (void)deleteBookmarkInMemory:(id)arg1;
- (void)enumerateBookmarks:(bool)arg1 andReadingListItems:(bool)arg2 matchingString:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)fastFetchBookmarksInBookmarkList:(id)arg1;
- (id)favoritesFolder;
- (id)favoritesFolderList;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2;
- (id)frequentlyVisitedSitesFolder;
- (id)frequentlyVisitedSitesFolderBookmarkID;
- (id)frequentlyVisitedSitesList;
- (unsigned long long)generation;
- (bool)hasInMemoryChanges;
- (id)iconDataForBookmark:(id)arg1;
- (unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(bool)arg2;
- (id)initReadonlySafariBookmarkCollection;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(bool)arg1;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(bool)arg1 readonlyCollection:(bool)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 checkIntegrity:(bool)arg2;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(bool)arg4 readonlyCollection:(bool)arg5;
- (bool)isEmpty;
- (bool)isMerging;
- (id)listWithID:(int)arg1;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(bool)arg3;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(bool)arg3 filteredUsingString:(id)arg4;
- (id)listWithSpecialID:(int)arg1;
- (void)localeSettingsChanged;
- (bool)markAllFavoritesAsNeedingIcons;
- (bool)markArchivedReadingListItemsAsNonRecoverable;
- (bool)markWebContentFilterAllowsAllReadingListItems;
- (bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(bool)arg2 error:(id*)arg3;
- (bool)moveBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (void)persistChangesWithCompletion:(id /* block */)arg1;
- (void)postBookmarksDidReloadNotification;
- (unsigned long long)purge:(unsigned long long)arg1;
- (id)purgeableReadingListItems;
- (unsigned long long)purgeableSpace;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(bool)arg3;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)readingListFolder;
- (int)readingListFolderBookmarkID;
- (id)readingListWithUnreadOnly:(bool)arg1;
- (id)readingListWithUnreadOnly:(bool)arg1 filteredUsingString:(id)arg2;
- (void)removePersistedInMemoryBookmarkChangesFile;
- (bool)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (bool)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(bool)arg1;
- (bool)rollOutLastReadingListItem;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (void)rollbackSyncTransaction;
- (id)rollingListOfArchivedReadingListItems;
- (unsigned long long)rollingReadingListMaximumCount;
- (id)rootBookmark;
- (id)rootList;
- (bool)saveBookmark:(id)arg1;
- (bool)saveBookmark:(id)arg1 startReadingListFetcher:(bool)arg2;
- (bool)saveBookmarks:(id)arg1 postNotification:(bool)arg2;
- (void)setFavoritesFolder:(id)arg1 localOnly:(bool)arg2;
- (void)setFavoritesFolderIdentifier:(int)arg1 postChangeNotification:(bool)arg2;
- (void)setMerging:(bool)arg1;
- (bool)setSyncData:(id)arg1 forKey:(id)arg2;
- (bool)shouldFetchIconForBookmark:(id)arg1;
- (id)subfoldersOfID:(int)arg1;
- (id)syncDataForKey:(id)arg1;
- (bool)syncSetString:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (void)test_restoreMissingSpecialBookmarks;
- (bool)updateReadingListWebFilterStatusForUnsetItemsOnly:(bool)arg1;
- (bool)vacuum;
- (id)webFilterWhiteList;
- (id)webFilterWhiteListFolder;
- (int)webFilterWhiteListFolderBookmarkID;

@end