/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>

@class NPSDomainAccessor, UIImageView;

@interface COSSOSSetupChoiceGettingStartedViewController : COSOptinViewController {

	NPSDomainAccessor* _gizmoGlobalDomain;
	UIImageView* _arrowImageView;

}

@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;              //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                       //@synthesize arrowImageView=_arrowImageView - In the implementation block
+(BOOL)controllerNeedsToRun;
-(id)detailString;
-(void)selectedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)detailTitleString;
-(BOOL)legacyButtonStyles;
-(id)moreOptionsButtonString;
-(void)selectedMoreOptions:(id)arg1 ;
-(BOOL)watchTextLayoutIsRightToLeft;
-(id)watchLanguages;
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)titleString;
-(id)imageResource;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

