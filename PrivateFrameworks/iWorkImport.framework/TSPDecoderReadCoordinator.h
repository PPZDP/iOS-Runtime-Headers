/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _dataQueue;
    <TSPDecoder> * _decoder;
    <TSPDecoderReadCoordinatorDelegate> * _delegate;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    NSMapTable * _objects;
    TSPComponent * _rootObjectComponent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isReadingFromDocument;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseObjectUUID;
- (BOOL)canRetainObjectReferencedByWeakLazyReference;
- (id)context;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(int)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (BOOL)endReading;
- (id)externalObjectForIdentifier:(int)arg1 componentIdentifier:(int)arg2 isReadFinished:(BOOL)arg3;
- (unsigned int)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (id)init;
- (id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isExternalLazyReference:(id)arg1;
- (BOOL)isReadingFromDocument;
- (id)objectForIdentifier:(int)arg1;
- (unsigned char)packageIdentifier;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(int)arg2 componentIdentifier:(int)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(int)arg2;
- (int)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (int)sourceType;
- (id)unarchivedObjectForIdentifier:(int)arg1 isReadFinished:(BOOL)arg2;

@end