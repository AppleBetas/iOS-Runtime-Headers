/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:21 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKAlertControllerDelegate;
@class NSArray, NSString;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol> {

	id<CKAlertControllerDelegate> _alertDelegate;

}

@property (assign,nonatomic,__weak) id<CKAlertControllerDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(void)addAction:(id)arg1 ;
-(BOOL)wantsWindowedPresentation;
-(BOOL)preserveModalPresentationStyle;
-(id<CKAlertControllerDelegate>)alertDelegate;
-(void)setAlertDelegate:(id<CKAlertControllerDelegate>)arg1 ;
@end

