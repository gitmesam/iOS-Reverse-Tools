//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface JSTableViewCell : UITableViewCell
{
    UILabel *_cellTextLabel;
    UIImageView *_cellAccessoryView;
}

@property(retain, nonatomic) UIImageView *cellAccessoryView; // @synthesize cellAccessoryView=_cellAccessoryView;
@property(readonly, nonatomic) UILabel *cellTextLabel; // @synthesize cellTextLabel=_cellTextLabel;
- (void).cxx_destruct;
- (void)setCellText:(id)arg1 align:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

