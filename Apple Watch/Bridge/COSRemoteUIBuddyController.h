/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class UIViewController, NSString;

@interface COSRemoteUIBuddyController : NSObject <COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	UIViewController* _ruiViewController;

}

@property (nonatomic,retain) UIViewController * ruiViewController;                        //@synthesize ruiViewController=_ruiViewController - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRUIViewController:(id)arg1 ;
-(UIViewController *)ruiViewController;
-(void)setRuiViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(NSString *)description;
-(id<COSBuddyControllerDelegate>)delegate;
-(id)viewController;
@end

