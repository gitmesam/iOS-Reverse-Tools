//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "AJAlertViewDelegate.h"
#import "JWPayInputPopViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class BaseTextField, JobPayBarView, JobPayTitleView, NSArray, NSMutableArray, NSString, PartimeJobBean, UILabel, UITableView;

@interface JobPayViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, JWPayInputPopViewDelegate, AJAlertViewDelegate>
{
    UITableView *_tableView;
    JobPayTitleView *_jobPayTitleView;
    JobPayBarView *_jobPayBarView;
    UILabel *_prePriceLab;
    BaseTextField *_priceField;
    BaseTextField *_extPriceField;
    NSArray *_titleArray;
    NSString *_surplusPreMoney;
    NSString *_totalPreMoney;
    NSString *_totalMoney;
    NSString *_orderId;
    NSMutableArray *_peopleArray;
    PartimeJobBean *_jobBean;
    unsigned long long _jobPayServiceType;
    unsigned long long _jobPayType;
}

@property(nonatomic) unsigned long long jobPayType; // @synthesize jobPayType=_jobPayType;
@property(nonatomic) unsigned long long jobPayServiceType; // @synthesize jobPayServiceType=_jobPayServiceType;
@property(retain, nonatomic) PartimeJobBean *jobBean; // @synthesize jobBean=_jobBean;
@property(retain, nonatomic) NSMutableArray *peopleArray; // @synthesize peopleArray=_peopleArray;
- (void).cxx_destruct;
- (void)toPayVC:(id)arg1;
- (void)toSuccessPage;
- (void)toJobDetailVCWithJobBean:(id)arg1 actionDelegate:(id)arg2 isSpread:(_Bool)arg3 jobType:(unsigned long long)arg4;
- (void)toJobPaySelectedPeopleVC:(id)arg1;
- (void)toTrusteeshipSubmitBillResultVC;
- (void)trackBillPeopleChangeAlert;
- (void)showPopView_billPeopleChange:(id)arg1;
- (void)trackPreMoneyChangeAlert;
- (void)showPopView_preMoneyChange:(id)arg1;
- (void)showPopView_repeatSumbitBill:(id)arg1;
- (void)showPopView_sumbitBill;
- (void)submitBillResultHandler;
- (void)sumbitBill;
- (void)requestCheckPayPw;
- (void)payHandler;
- (void)sureBtnHandler:(id)arg1;
- (void)jobPayTitleViewTapHandler:(id)arg1;
- (void)payMethodInputSuccessHandler;
- (void)pam_alertCallBackHandle:(long long)arg1;
- (void)wagePrepay:(id)arg1;
- (void)createWageBill:(CDUnknownBlockType)arg1;
- (void)requestGetPrepayMoney;
- (id)cleanBillBean;
- (id)getExtPrice;
- (id)getApplyid;
- (id)getApply_id;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)unEnoughToPay;
- (void)inputPayPassword;
- (void)enoughToPay;
- (double)needMoney;
- (void)checkMoenyEnough;
- (void)updatePreMoenyUI;
- (void)showPrePriceCommonUI;
- (void)showPrePriceNotEnoughUI;
- (void)showPrePriceEnoughUI;
- (void)showPrePriceTrusteeshipUI;
- (void)reloadTitle;
- (void)updateBarViewUI;
- (void)updateTitleUI;
- (void)updateUI;
- (void)exit;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

