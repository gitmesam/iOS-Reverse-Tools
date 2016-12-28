//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMAbstractLogger.h"

#import "EMLogger.h"

@class NSString;

@interface EMASLLogger : EMAbstractLogger <EMLogger>
{
    struct __asl_object_s *_client;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <EMLogFormatter> logFormatter;
@property(readonly, nonatomic) struct dispatch_queue_s *loggerQueue;
@property(readonly) Class superclass;

@end
