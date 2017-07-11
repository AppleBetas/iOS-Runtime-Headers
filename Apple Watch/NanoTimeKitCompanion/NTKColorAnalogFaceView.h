/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:48 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class UIColor, NTKColorAnalogScene;

@interface NTKColorAnalogFaceView : NTKSpriteKitAnalogFaceView {

	UIColor* _complicationForegroundColor;
	UIColor* _complicationPlatterColor;

}

@property (nonatomic,readonly) NTKColorAnalogScene * analogScene; 
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(void)_loadScene;
-(BOOL)_supportsUnadornedSnapshot;
-(void)_configureReusableTimeView:(id)arg1 ;
-(double)_edgeGapForState:(long long)arg1 ;
-(double)_lisaGapForState:(long long)arg1 ;
-(CGRect)_monogramReferenceFrameForState:(long long)arg1 ;
-(UIEdgeInsets)_monogramKeylinePadding;
-(void)_enumerateColorComplicationSlotsWithBlock:(/*^block*/id)arg1 ;
-(id)_colorComplicationViewForSlot:(id)arg1 ;
@end

