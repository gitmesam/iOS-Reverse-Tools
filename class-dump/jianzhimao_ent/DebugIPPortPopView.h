//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePopView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface DebugIPPortPopView : BasePopView
{
    long long _count;
    NSMutableArray *_items;
    id <DebugDatasource> _debugDatasource;
    id <DebugDelegate> _debugDelegate;
    UIView *_titleView;
    UILabel *_titleLab;
    UIImageView *_topLineView;
    UIView *_contentView;
    UITextField *_httpTextField;
    UITextField *_httpsTextField;
    UIImageView *_bottomLineView;
    UIView *_actionView;
    UIView *_vline;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
}

+ (id)createTextField:(id)arg1;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *vline; // @synthesize vline=_vline;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIImageView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UITextField *httpsTextField; // @synthesize httpsTextField=_httpsTextField;
@property(retain, nonatomic) UITextField *httpTextField; // @synthesize httpTextField=_httpTextField;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <DebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak id <DebugDatasource> debugDatasource; // @synthesize debugDatasource=_debugDatasource;
- (void).cxx_destruct;
- (id)dataOfItem:(long long)arg1;
- (void)notifityData;
- (void)alertBtnHandler:(id)arg1;
- (void)onShow:(_Bool)arg1;
- (void)initContentViewItems;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMessage:(id)arg1;

@end
