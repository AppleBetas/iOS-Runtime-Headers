/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:06 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end

