//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "LQCycleBannerViewDataSource.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LQCycleBannerView, LeaderIndexViewController, LeaderOrderCenterMenuView, NSMutableArray, NSString, PagedRequestManager, UITableView, UIView;

@interface LeaderOrderViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, LQCycleBannerViewDataSource>
{
    LeaderIndexViewController *_parentPage;
    UITableView *_tblOrderCenter;
    UIView *_tableViewHeader;
    NSMutableArray *_bannerArr;
    NSMutableArray *_orderCenterArr;
    NSMutableArray *_orderHistoryArr;
    NSMutableArray *_tableViewDataSource;
    LQCycleBannerView *_bannerView;
    PagedRequestManager *_pageManager;
    LeaderOrderCenterMenuView *_menuView;
    UIView *_footer;
    double _currentNavAlpha;
    NSString *_positionCity;
}

@property(copy, nonatomic) NSString *positionCity; // @synthesize positionCity=_positionCity;
@property(nonatomic) double currentNavAlpha; // @synthesize currentNavAlpha=_currentNavAlpha;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) LeaderOrderCenterMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) PagedRequestManager *pageManager; // @synthesize pageManager=_pageManager;
@property(retain, nonatomic) LQCycleBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSMutableArray *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) NSMutableArray *orderHistoryArr; // @synthesize orderHistoryArr=_orderHistoryArr;
@property(retain, nonatomic) NSMutableArray *orderCenterArr; // @synthesize orderCenterArr=_orderCenterArr;
@property(retain, nonatomic) NSMutableArray *bannerArr; // @synthesize bannerArr=_bannerArr;
@property(nonatomic) __weak UIView *tableViewHeader; // @synthesize tableViewHeader=_tableViewHeader;
@property(nonatomic) __weak UITableView *tblOrderCenter; // @synthesize tblOrderCenter=_tblOrderCenter;
@property(nonatomic) __weak LeaderIndexViewController *parentPage; // @synthesize parentPage=_parentPage;
- (void).cxx_destruct;
- (id)bannerView:(id)arg1 viewOfPage:(long long)arg2;
- (long long)pageCountOfbannerView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getBannerByID:(id)arg1;
- (void)orderItemClick:(long long)arg1;
- (void)bannerTapGestureHandler:(id)arg1;
- (void)btnAllOrderPressed:(id)arg1;
- (void)refreshLatestOrders;
- (void)refreshOrderCenterWithMode:(long long)arg1;
- (void)refreshBanner;
- (void)mj_loadMoreData;
- (void)mj_refreshData;
- (void)baidu_locationPositionResult:(id)arg1;
- (void)baidu_locationError:(id)arg1;
- (void)initBaiduLBS;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (void)refreshNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
