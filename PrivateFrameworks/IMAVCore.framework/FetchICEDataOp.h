/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSData, NetworkCheckOperation, IMAVChatParticipant;



@interface FetchICEDataOp : IMExtendedOperation 
{
    NetworkCheckOperation *_networkCheckOp;
    IMAVChatParticipant *_participant;
    NSData *_ICEData;
}


- (id)initWithParticipant:(id)arg1;
- (id)ICEData;
- (id)networkCheckOperation;
- (void)createChildOperations;
- (void)main;
- (void)dealloc;

@end