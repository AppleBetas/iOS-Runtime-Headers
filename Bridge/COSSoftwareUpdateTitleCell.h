/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <Preferences/PSSoftwareUpdateTitleCell.h>

@class NRDevice;

@interface COSSoftwareUpdateTitleCell : PSSoftwareUpdateTitleCell {

	NRDevice* _device;

}

@property (nonatomic,readonly) NRDevice * device;              //@synthesize device=_device - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 device:(id)arg4 ;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(void)updateProgressTintColor;
-(id)gearBackgroundImage;
-(NRDevice *)device;
@end

