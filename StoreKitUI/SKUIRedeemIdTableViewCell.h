/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemIdTableViewCellDelegate;
@class UITextField, NSString;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate> {

	id<SKUIRedeemIdTableViewCellDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                            //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setDelegate:(id<SKUIRedeemIdTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SKUIRedeemIdTableViewCellDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textField;
-(void)_initializeTextField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setAutoCapitalizationType:(long long)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
@end

