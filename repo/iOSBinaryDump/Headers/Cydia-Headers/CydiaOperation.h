/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@interface CydiaOperation : _CC_MD5
{
    struct MenesObjectHandle<NSString, 0> operator_;
    struct MenesObjectHandle<NSString, 0> value_;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)fp8;
+ (id)_attributeKeys;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)value;
- (id)operator;
- (id)attributeKeys;
- (id)initWithOperator:(const char *)fp8 value:(const char *)fp12;

@end
