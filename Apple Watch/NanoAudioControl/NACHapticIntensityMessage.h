/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:07 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NACHapticIntensityMessage : PBCodable <NSCopying> {

	float _intensity;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasIntensity; 
@property (assign,nonatomic) float intensity;                //@synthesize intensity=_intensity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(float)intensity;
-(void)setIntensity:(float)arg1 ;
-(void)setHasIntensity:(BOOL)arg1 ;
-(BOOL)hasIntensity;
@end

