/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary * _pendingUpdateRecordByStoreAdamID;
}

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_mediaLibrary;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(int)arg3;
- (id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(int)arg2;
- (id)_addPendingUpdateRecordForStoreAdamID:(int)arg1 contentTasteType:(int)arg2;
- (int)_contentTypeForModel:(id)arg1;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (id)_libraryEntityForModel:(id)arg1;
- (id)_libraryEntityWithStoreID:(int)arg1 contentType:(int)arg2;
- (id)_libraryPlaylistWithGlobalID:(id)arg1;
- (void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2;
- (void)_removePendingUpdateRecordForStoreAdamID:(int)arg1 token:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setTasteType:(int)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(int)arg1 forModel:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(int)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(int)arg1 forStoreAdamID:(int)arg2 withContentType:(int)arg3 completionHandler:(id /* block */)arg4;
- (int)tasteTypeForMediaEntity:(id)arg1;
- (int)tasteTypeForModel:(id)arg1;
- (int)tasteTypeForPlaylistGlobalID:(id)arg1;
- (int)tasteTypeForStoreAdamID:(int)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (BOOL)MPU_tasteTypeSupportedForContentItemIdentifierCollection:(id)arg1;

- (void)MPU_setTasteType:(unsigned int)arg1 forContentItemIdentifierCollection:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned int)MPU_tasteTypeForContentItemIdentifierCollection:(id)arg1;

@end