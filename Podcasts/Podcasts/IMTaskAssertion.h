/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMProcessAssertion;

@interface IMTaskAssertion : NSObject {

	/*^block*/id _expireHandler;
	NSString* _debugInfo;
	IMProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
@end

