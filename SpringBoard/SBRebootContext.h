/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBRebootContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _isDark;
	BOOL _fromOTASoftwareUpdate;

}

@property (nonatomic,copy) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isDark,nonatomic) BOOL dark;              //@synthesize isDark=_isDark - In the implementation block
-(void)setDark:(BOOL)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(BOOL)isDark;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

