//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

@class NSArray;

@interface BaseTabBarViewController : UITabBarController
{
    NSArray *_viewCtrls;
}

@property(retain, nonatomic) NSArray *viewCtrls; // @synthesize viewCtrls=_viewCtrls;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)badgeHandler:(id)arg1;
- (void)showHelpCenterBadge:(_Bool)arg1;
- (void)helpCenterBadgeHandler:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupViewController;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
