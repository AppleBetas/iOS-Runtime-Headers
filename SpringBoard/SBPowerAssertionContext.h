/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBPowerAssertionContext : NSObject {

	NSString* _processName;
	/*^block*/id _collectionFn;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) id collectionFn;                     //@synthesize collectionFn=_collectionFn - In the implementation block
-(id)collectionFn;
-(void)setCollectionFn:(id)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
@end

