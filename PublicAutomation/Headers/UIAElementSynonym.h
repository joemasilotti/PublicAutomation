//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@interface UIAElementSynonym : NSObject
{
    NSString *_relationship;
    NSString *_attribute;
    id _value;
}

+ (void)_setAssociatedStringExpressions:(id)arg1 forSynonymString:(id)arg2;
+ (id)associatedStringExpressionsForSynonymString:(id)arg1;
+ (id)synonymForRelationship:(id)arg1 attribute:(id)arg2 value:(id)arg3;
+ (id)synonymForRelationship:(id)arg1;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *attribute; // @synthesize attribute=_attribute;
@property(readonly) NSString *relationship; // @synthesize relationship=_relationship;
- (id)stringForScriptingLanguage:(int)arg1 withOptions:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithRelationship:(id)arg1 attribute:(id)arg2 value:(id)arg3;

@end

