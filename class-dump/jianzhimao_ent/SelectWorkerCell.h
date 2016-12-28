//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HJCAjustNumButtonDelegate.h"

@class DutyWorker, HJCAjustNumButton, NSString, UIImageView, UILabel;

@interface SelectWorkerCell : UITableViewCell <HJCAjustNumButtonDelegate>
{
    id <SelectWorkerCellDelegate> _delegate;
    DutyWorker *_worker;
    UIImageView *_avatar;
    UILabel *_nameLabel;
    HJCAjustNumButton *_numBtn;
}

@property(nonatomic) __weak HJCAjustNumButton *numBtn; // @synthesize numBtn=_numBtn;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) DutyWorker *worker; // @synthesize worker=_worker;
@property(nonatomic) id <SelectWorkerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)numButtonChangeWithType:(_Bool)arg1;
- (void)numButtonDidChangeWithCurrentNum:(id)arg1 correct:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
