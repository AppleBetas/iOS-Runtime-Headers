/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@interface IMPulseEvent : NSObject {

	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	int _gate_open;

}
-(id)init;
-(void)dealloc;
-(void)pulse;
-(void)wait;
@end

