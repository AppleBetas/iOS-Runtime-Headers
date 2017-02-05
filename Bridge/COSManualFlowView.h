/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@protocol COSManualFlowViewDelegate;
@class UITextField, _UIBackdropView, UILabel, UIButton;

@interface COSManualFlowView : UIView {

	id<COSManualFlowViewDelegate> _delegate;
	UITextField* _deviceNameTextField;
	UITextField* _btDataTextField;
	_UIBackdropView* _backdropView;
	UILabel* _instructions;
	UILabel* _deviceName;
	UILabel* _btData;
	UIButton* _doneButton;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                             //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UILabel * instructions;                                   //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) UILabel * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) UILabel * btData;                                         //@synthesize btData=_btData - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<COSManualFlowViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * deviceNameTextField;                        //@synthesize deviceNameTextField=_deviceNameTextField - In the implementation block
@property (nonatomic,readonly) UITextField * btDataTextField;                            //@synthesize btDataTextField=_btDataTextField - In the implementation block
-(UITextField *)btDataTextField;
-(UITextField *)deviceNameTextField;
-(void)pressedCancel:(id)arg1 ;
-(void)pressedDone:(id)arg1 ;
-(UILabel *)btData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<COSManualFlowViewDelegate>)arg1 ;
-(id<COSManualFlowViewDelegate>)delegate;
-(UIButton *)cancelButton;
-(UIButton *)doneButton;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(UILabel *)instructions;
-(UILabel *)deviceName;
@end

