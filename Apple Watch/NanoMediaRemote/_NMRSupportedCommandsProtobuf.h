/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _supportedCommands;

}

@property (nonatomic,retain) NSMutableArray * supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
+(Class)supportedCommandType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addSupportedCommand:(id)arg1 ;
-(unsigned long long)supportedCommandsCount;
-(void)clearSupportedCommands;
-(id)supportedCommandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)supportedCommands;
-(void)setSupportedCommands:(NSMutableArray *)arg1 ;
@end

