//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMMessage;

@protocol IEMChatProgressDelegate <NSObject>
- (void)setProgress:(float)arg1 forMessage:(EMMessage *)arg2 forMessageBody:(id <IEMMessageBody>)arg3;

@optional
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 forMessage:(EMMessage *)arg2;
@end

