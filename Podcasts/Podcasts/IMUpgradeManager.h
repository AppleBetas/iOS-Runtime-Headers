/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMUpgradeManagerDelegateNSObject;
@class NSOperationQueue, UIApplication, NSDictionary, NSMutableArray;

@interface IMUpgradeManager : NSObject {

	NSOperationQueue* _queue;
	UIApplication* _application;
	NSDictionary* _launchOptions;
	NSMutableArray* _urls;
	BOOL _isObservingCount;
	id<IMUpgradeManagerDelegate><NSObject> _appDelegate;

}
-(void)stopObservingOperationCount;
-(void)startObservingOperationCount;
-(void)_finishOnMainThread;
-(id)initWithApplicationDelegate:(id)arg1 application:(id)arg2 launchOptions:(id)arg3 ;
-(void)startUpgradeTasks;
-(void)cancelUpgradeTasks;
-(void)addPostUpgradeOpenUrl:(id)arg1 ;
-(void)dealloc;
-(BOOL)addTask:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

