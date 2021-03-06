//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JobAndResumeManagerLogicBase.h"

#import "AJAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString;

@interface JobAndResumeManagerLogicEmploy : JobAndResumeManagerLogicBase <UIActionSheetDelegate, AJAlertViewDelegate>
{
    id <JobAndResumeManagerEmployLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <JobAndResumeManagerEmployLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jobAndResumeManagerEmployLogicDelegateHandler:(_Bool)arg1;
- (void)toSceneSigninViewController:(id)arg1;
- (void)toSignManagementViewController:(id)arg1;
- (void)toPayrollViewController:(id)arg1;
- (void)toPayrollBillVC:(id)arg1 salaryInfo:(id)arg2;
- (void)toJobPayVC:(id)arg1 jobPayService:(unsigned long long)arg2;
- (void)toResumeSelectedViewCtrl:(id)arg1 resumeSelectType:(unsigned long long)arg2 dataSource:(id)arg3 partimeJobBean:(id)arg4;
- (void)toSignInRecordVC:(id)arg1;
- (void)toCancelReasonVC:(id)arg1;
- (void)toRemarkVC:(id)arg1;
- (void)toPaySelectVCWithDatasource:(id)arg1;
- (void)getResumeListSuccessHandler:(id)arg1;
- (id)filterWithoutCancle:(id)arg1;
- (void)getAllResumeList:(CDUnknownBlockType)arg1;
- (void)l_getResumeListWithSearch:(id)arg1 needHub:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)l_getResumeListWithSearch:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getSalaryInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestDosign:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestReject:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestApplyAccount:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestDeleteCancleEmploy:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestNoPayList:(CDUnknownBlockType)arg1;
- (void)requestMassNotificationCount:(CDUnknownBlockType)arg1;
- (void)cancleOrder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cancleOrder:(id)arg1;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)l_showCancleEmploy:(id)arg1;
- (void)l_showPopView_recoverPay:(id)arg1;
- (void)l_showPopView_reject:(id)arg1;
- (void)l_showPopView_isDuty:(id)arg1;
- (void)l_showPopView_surePay:(id)arg1;
- (void)getSendNumHandler:(long long)arg1;
- (void)l_employNotifityHandler;
- (void)l_payHandler:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)l_payHandler:(id)arg1;
- (void)l_totalPay:(CDUnknownBlockType)arg1;
- (void)l_totalPayBtnHandler;
- (void)l_totalPayOrSumbitBillBtnHandler;
- (void)l_sumbitBillBtnHandler;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheet_signinManager;
- (void)l_signinManagerBtnHandler;
- (void)l_employSignRecordHandler:(id)arg1;
- (void)l_cancleEmploy:(id)arg1;
- (void)l_paySureHandler:(id)arg1;
- (void)l_signBtnHandler:(id)arg1;
- (void)l_cancleHandler:(id)arg1;
- (void)l_remarkHandler:(id)arg1;
- (void)resortl_dataSource:(id)arg1 jobBean:(id)arg2;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

