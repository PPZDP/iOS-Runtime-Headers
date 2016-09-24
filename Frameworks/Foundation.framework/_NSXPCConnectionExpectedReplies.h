/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplies : NSObject {
    int  _lock;
    NSObject<OS_dispatch_group> * _replyGroup;
    struct __CFDictionary { } * _replyTable;
    unsigned int  _sequence;
}

- (void)addReplyCompletionBlockOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (void)decrementOutstandingReplyCount;
- (void)incrementOutstandingReplyCount;
- (id)init;
- (id)progressForSequence:(unsigned int)arg1;
- (void)removeSequence:(unsigned int)arg1;
- (unsigned int)sequenceWithProgress:(id)arg1;

@end