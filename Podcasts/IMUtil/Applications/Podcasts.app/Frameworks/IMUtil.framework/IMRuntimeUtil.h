/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 9:57:30 AM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUtil.framework/IMUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMRuntimeUtil : NSObject
+(void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateBoolValue:(BOOL)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(id)associatedValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(id)arg3 ;
+(BOOL)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(BOOL)arg3 ;
+(id)associatedValueForKey:(id)arg1 onObject:(id)arg2 ;
+(long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(long long)arg3 ;
+(float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(float)arg3 ;
+(double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(double)arg3 ;
+(void)swizzleMethod:(SEL)arg1 onClass:(Class)arg2 withReplacementBlock:(/*^block*/id)arg3 ;
+(void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateBoolValue:(BOOL)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(BOOL)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2 ;
+(long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2 ;
+(float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2 ;
+(double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2 ;
@end

