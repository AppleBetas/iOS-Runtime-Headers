/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:56 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRCloudAvailabilityProtobuf, NSString;

@interface NMRCloudAvailabilityMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRCloudAvailabilityProtobuf* _protobuf;

}

@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL canShowCloudMusic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)protobufData;
-(BOOL)canShowCloudMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
@end

