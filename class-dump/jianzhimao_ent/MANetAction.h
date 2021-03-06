//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPSessionManager;

@interface MANetAction : NSObject
{
    AFHTTPSessionManager *_httpManager;
}

+ (void)log_request:(id)arg1;
+ (void)log_error_progress:(id)arg1;
+ (void)log_error_json:(id)arg1;
+ (void)log_error_result:(id)arg1 from:(id)arg2;
+ (int)extractIdentity:(struct __CFData *)arg1:(struct __SecIdentity **)arg2;
+ (id)creatPostURL:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) AFHTTPSessionManager *httpManager; // @synthesize httpManager=_httpManager;
- (void).cxx_destruct;
- (long long)errorRequest:(id)arg1;
- (void)cancelDownloadRequest;
- (void)cancelAllRequest;
- (void)cancleRequest:(id)arg1;
- (void)errorResult:(id)arg1 from:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)resultWithObj:(id)arg1 andRequest:(id)arg2;
- (id)paramsWithRequest:(id)arg1;
- (id)urlWithRequest:(id)arg1;
- (id)uploadFile:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)post:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)get:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)requestWithMenthod:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)httpSend:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)safeSend:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)send:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (id)configAFHTTPRequestSerializer:(id)arg1;
- (void)setupSecurityPolicy;
- (void)setupResponseSerializer;
- (void)setupRequestSerializer:(id)arg1;
- (void)setupAuthenticationChallenge;
- (id)init;

@end

