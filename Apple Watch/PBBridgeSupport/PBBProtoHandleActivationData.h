/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:14 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PBBProtoHandleActivationData : PBCodable <NSCopying> {

	NSData* _activationData;
	NSData* _responseHeaders;

}

@property (nonatomic,retain) NSData * activationData;               //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,retain) NSData * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseHeaders:(NSData *)arg1 ;
-(NSData *)responseHeaders;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
@end

