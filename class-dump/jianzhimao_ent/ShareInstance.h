//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ShareInstance : NSObject
{
}

+ (id)getViewControllerFromViewCtrlsWithViewClass:(Class)arg1 viewCtrls:(id)arg2;
+ (id)dictionaryFromData:(id)arg1;
+ (id)jsonValue:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)formatDateFromServerDateStr:(id)arg1 withFormatString:(id)arg2;
+ (id)formatterSigninTime:(id)arg1;
+ (id)formatterDistanceSimple:(double)arg1;
+ (id)formatterDistance:(double)arg1;
+ (id)formatterTruesteeshipStatusString:(long long)arg1 operMsg:(id)arg2 countdown:(long long)arg3 textcolor:(id)arg4 needSecond:(_Bool)arg5;
+ (id)formatterTime:(long long)arg1 needSecond:(_Bool)arg2;
+ (_Bool)resumeBillSubmit:(long long)arg1 job_type:(long long)arg2;
+ (id)chatUserInfo:(long long)arg1 messageType:(long long)arg2;
+ (id)userIdFromeQyUsername:(id)arg1;
+ (id)userIdFromeHxUsername:(id)arg1;
+ (id)qyUsernameFromeUserId:(id)arg1;
+ (id)hxUsernameFromeUserId:(id)arg1;
+ (id)createSexImage:(id)arg1 gray:(_Bool)arg2;
+ (_Bool)isFastJob:(long long)arg1;
+ (id)createJobTypeGray:(id)arg1;
+ (id)createJobType:(id)arg1;
+ (id)createFile:(id)arg1 name:(id)arg2 extension:(id)arg3 path:(id)arg4;
+ (id)instance;

@end
