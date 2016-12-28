//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIWebViewDelegate.h"

@class JobPrepayInfoBean, NSArray, NSString, PartimeJobBean, UIImageView, UILabel, UITableView, UIWebView;

@interface PrePayConditionViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate>
{
    UIImageView *_titleView;
    UILabel *_prePriceLab;
    UILabel *_subPrePriceLab;
    UITableView *_tableView;
    UIWebView *_contentWebView;
    NSArray *_titleArray;
    PartimeJobBean *_jobBean;
    JobPrepayInfoBean *_jobPrepayInfo;
}

@property(retain, nonatomic) JobPrepayInfoBean *jobPrepayInfo; // @synthesize jobPrepayInfo=_jobPrepayInfo;
@property(retain, nonatomic) PartimeJobBean *jobBean; // @synthesize jobBean=_jobBean;
- (void).cxx_destruct;
- (void)toCleanRequestVC;
- (void)toPayUsageVC;
- (void)toPayCompositionVC;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)showPopView_noRequestApply;
- (void)cleanRequestFaildHandler:(id)arg1;
- (_Bool)checkRequestApply;
- (void)gotoCleanRequestApply;
- (void)loadHtml:(id)arg1;
- (void)updateUI;
- (void)setupMAS;
- (void)initTextView;
- (void)initTableView;
- (void)initTitleView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
