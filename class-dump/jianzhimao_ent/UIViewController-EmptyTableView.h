//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DZNEmptyDataSetDelegate.h"
#import "DZNEmptyDataSetSource.h"

@class NSString, UITableView;

@interface UIViewController (EmptyTableView) <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
- (void)dzn_refreshData;
- (void)configEmptyTableView;
- (void)emptyDataSetDidTapView:(id)arg1;
- (_Bool)emptyDataSetShouldAllowScroll:(id)arg1;
- (_Bool)emptyDataSetShouldAllowTouch:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
@property(copy, nonatomic) NSString *dzn_emptyTip;
@property(retain, nonatomic) UITableView *dzn_emptyTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
