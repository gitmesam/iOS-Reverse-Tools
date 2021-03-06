//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Extend)
+ (id)dayFormatString;
+ (id)shortdbFormatString;
+ (id)dbFormatString;
- (id)dateWithZeroSeconds;
- (id)dateWithZeroTime;
- (id)dateByAddingDays:(long long)arg1;
- (id)stringToShortNSDate:(id)arg1;
- (id)stringToNSDate:(id)arg1;
- (long long)dateTimerWithString:(id)arg1;
- (id)curTime;
- (id)curDate;
- (id)curDateAndTime;
- (long long)timeStamp;
- (id)stringWithDateFormat:(id)arg1;
- (id)getChineseWeek;
@property(readonly, nonatomic) long long weekday;
@property(readonly, nonatomic) long long second;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
@property(readonly, nonatomic) long long day;
@property(readonly, nonatomic) long long month;
@property(readonly, nonatomic) long long year;
@end

