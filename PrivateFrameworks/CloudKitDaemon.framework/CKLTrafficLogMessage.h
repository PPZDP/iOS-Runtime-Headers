/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLTrafficLogMessage : NSObject {
    long long  _bodyStreamResetCount;
    NSDictionary * _requestHeaders;
    NSString * _requestMethod;
    NSArray * _requestObjects;
    NSDate * _requestTime;
    NSURL * _requestURL;
    NSDictionary * _responseHeaders;
    NSArray * _responseObjects;
    long long  _responseStatus;
    NSDate * _responseTime;
    NSString * _uuid;
}

@property (nonatomic) long long bodyStreamResetCount;
@property (nonatomic, retain) NSDictionary *requestHeaders;
@property (nonatomic, retain) NSString *requestMethod;
@property (nonatomic, retain) NSArray *requestObjects;
@property (nonatomic, retain) NSDate *requestTime;
@property (nonatomic, retain) NSURL *requestURL;
@property (nonatomic, retain) NSDictionary *responseHeaders;
@property (nonatomic, retain) NSArray *responseObjects;
@property (nonatomic) long long responseStatus;
@property (nonatomic, readonly) NSDate *responseTime;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6;
- (long long)bodyStreamResetCount;
- (id)description;
- (id)requestHeaders;
- (id)requestMethod;
- (id)requestObjects;
- (id)requestTime;
- (id)requestURL;
- (id)responseHeaders;
- (id)responseObjects;
- (long long)responseStatus;
- (id)responseTime;
- (void)setBodyStreamResetCount:(long long)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setRequestMethod:(id)arg1;
- (void)setRequestObjects:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setResponseObjects:(id)arg1;
- (void)setResponseStatus:(long long)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end