//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UpsightStorableObject.h"

@class NSString;

@interface USDefaultsStorable : UpsightStorableObject
{
    NSString *_defaultName;
    id <NSCoding> _value;
}

@property(retain, nonatomic) id <NSCoding> value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
- (void).cxx_destruct;
- (id)initWithDefaultName:(id)arg1;
- (id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3;

@end
