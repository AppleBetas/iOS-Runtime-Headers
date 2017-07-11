/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:24 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NRClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _processName;
	NSArray* _entitlements;
	unsigned long long _lastIndexCheckin;

}

@property (nonatomic,retain) NSString * processName;                           //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSArray * entitlements;                           //@synthesize entitlements=_entitlements - In the implementation block
@property (assign,nonatomic) unsigned long long lastIndexCheckin;              //@synthesize lastIndexCheckin=_lastIndexCheckin - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)processName;
-(unsigned long long)lastIndexCheckin;
-(void)setLastIndexCheckin:(unsigned long long)arg1 ;
-(NSArray *)entitlements;
-(void)setEntitlements:(NSArray *)arg1 ;
@end

