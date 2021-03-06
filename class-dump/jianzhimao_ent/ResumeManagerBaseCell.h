//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseCell.h"

@class UIButton, UIImageView, UILabel;

@interface ResumeManagerBaseCell : BaseCell
{
    UIImageView *_logoView;
    UIImageView *_isCancleView;
    UILabel *_nameLab;
    UIImageView *_sexView;
    UILabel *_ageLab;
    UILabel *_heightLab;
    UILabel *_contentLab;
    UIImageView *_arrawView;
    UIButton *_selectedBtn;
    UIButton *_clostBtn;
    unsigned long long _cellType;
}

@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) UIButton *clostBtn; // @synthesize clostBtn=_clostBtn;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIImageView *arrawView; // @synthesize arrawView=_arrawView;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *heightLab; // @synthesize heightLab=_heightLab;
@property(retain, nonatomic) UILabel *ageLab; // @synthesize ageLab=_ageLab;
@property(retain, nonatomic) UIImageView *sexView; // @synthesize sexView=_sexView;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *isCancleView; // @synthesize isCancleView=_isCancleView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setIsRead:(long long)arg1;
- (void)setResumeManagerCellType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

