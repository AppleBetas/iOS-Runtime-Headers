/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:06 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACXPCInterface <NSObject>
@required
-(void)beginObservingVolume;
-(void)beginObservingAudioRoutesForCategory:(id)arg1;
-(void)endObservingVolume;
-(void)volumeValueForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeControlAvailabilityForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)mutedStateForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)hapticIntensity:(/*^block*/id)arg1;
-(void)prominentHapticEnabled:(/*^block*/id)arg1;
-(void)systemMutedState:(/*^block*/id)arg1;
-(void)EULimitForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeWarningForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)setVolumeValue:(float)arg1 category:(id)arg2;
-(void)setMuted:(BOOL)arg1 category:(id)arg2;
-(void)setHapticIntensity:(float)arg1;
-(void)setProminentHapticEnabled:(BOOL)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)endObservingAudioRoutesForCategory:(id)arg1;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
-(void)playAudioAndHapticPreview;
-(void)playProminentHapticPreview;

@end

