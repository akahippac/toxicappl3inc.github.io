/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CyteTableViewCell.h"

#import "CyteTableViewCellDelegate-Protocol.h"

@interface SectionCell : CyteTableViewCell <CyteTableViewCellDelegate>
{
    struct MenesObjectHandle<NSString, 0> basic_;
    struct MenesObjectHandle<NSString, 0> section_;
    struct MenesObjectHandle<NSString, 0> name_;
    struct MenesObjectHandle<NSString, 0> count_;
    struct MenesObjectHandle<UIImage, 0> icon_;
    struct MenesObjectHandle<UISwitch, 0> switch_;
    BOOL editing_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawContentRect:(struct CGRect)fp8;
- (id)accessibilityLabel;
- (void)setFrame:(struct CGRect)fp8;
- (void)setSection:(id)fp8 editing:(BOOL)fp12;
- (void)onSwitch:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8 reuseIdentifier:(id)fp24;

@end
