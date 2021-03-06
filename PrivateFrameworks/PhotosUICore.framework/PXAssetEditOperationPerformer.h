/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetEditOperationPerformer : NSObject {
    <PXDisplayAsset> * _asset;
    NSProgress * _progress;
    NSString * _type;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithEditOperationType:(id)arg1 asset:(id)arg2;
- (void)performEditOperationWithCompletionHandler:(id /* block */)arg1;
- (id)progress;
- (id)type;

@end
