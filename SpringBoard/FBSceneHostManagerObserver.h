/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneHostManagerObserver <NSObject>
@optional
-(void)sceneHostManagerDidSuspendHosting:(id)arg1;
-(void)sceneHostManagerDidResumeHosting:(id)arg1;
-(void)sceneHostManagerDidInvalidate:(id)arg1;
-(void)sceneHostManager:(id)arg1 willDeactivateRequester:(id)arg2;
-(void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2;
-(void)sceneHostManagerLayersDidChange:(id)arg1;

@end

