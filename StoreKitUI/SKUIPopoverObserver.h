/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:59 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSString;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	SEL _selector;
	id _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPopoverController:(id)arg1 ;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 ;
@end

