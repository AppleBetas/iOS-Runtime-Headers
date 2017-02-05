/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSBuddyController.h>
#import <Bridge/BuddyTCSubControllerDelegate.h>
#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol COSBuddyControllerDelegate;
@class RUIObjectModel, NSData, RUILoader, RUIPage, NSMutableArray, UIViewController, BuddySimpleTCController, NSString;

@interface COSTermsConditionsController : NSObject <COSBuddyController, BuddyTCSubControllerDelegate, RUILoaderDelegate, RUIObjectModelDelegate> {

	RUIObjectModel* _objectModel;
	BOOL _warrantySentinelExists;
	id<COSBuddyControllerDelegate> _delegate;
	NSData* _onlineTerms;
	RUILoader* _loader;
	RUIPage* _loadingPage;
	NSMutableArray* _objectModels;
	UIViewController* _viewController;
	NSData* _offlineLicense;
	NSData* _offlineMultiterms;
	NSData* _offlineWarranty;
	BuddySimpleTCController* _offlineLicenseVC;
	BuddySimpleTCController* _offlineWarrantyVC;

}

@property (assign,nonatomic) BOOL warrantySentinelExists;                                 //@synthesize warrantySentinelExists=_warrantySentinelExists - In the implementation block
@property (nonatomic,retain) NSData * onlineTerms;                                        //@synthesize onlineTerms=_onlineTerms - In the implementation block
@property (nonatomic,retain) RUILoader * loader;                                          //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) RUIPage * loadingPage;                                       //@synthesize loadingPage=_loadingPage - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectModels;                               //@synthesize objectModels=_objectModels - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSData * offlineLicense;                                     //@synthesize offlineLicense=_offlineLicense - In the implementation block
@property (nonatomic,retain) NSData * offlineMultiterms;                                  //@synthesize offlineMultiterms=_offlineMultiterms - In the implementation block
@property (nonatomic,retain) NSData * offlineWarranty;                                    //@synthesize offlineWarranty=_offlineWarranty - In the implementation block
@property (nonatomic,retain) BuddySimpleTCController * offlineLicenseVC;                  //@synthesize offlineLicenseVC=_offlineLicenseVC - In the implementation block
@property (nonatomic,retain) BuddySimpleTCController * offlineWarrantyVC;                 //@synthesize offlineWarrantyVC=_offlineWarrantyVC - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)controllerNeedsToRun;
-(id)holdActivityIdentifier;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
-(void)enteredCompatibilityState:(id)arg1 ;
-(void)requestOnlineTermsAndConditions;
-(id)offlineLicenseController;
-(void)endPerformancePhases;
-(void)handleOnlineTermsAndConditionsResponse:(id)arg1 error:(id)arg2 ;
-(void)retrieveOfflineTerms;
-(void)offlineTermsResponse:(id)arg1 ;
-(void)queryGizmoForShowWarrantySentinel;
-(void)warrantySentinelResponse:(id)arg1 ;
-(void)presentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(void)buddyTCSubController:(id)arg1 didFinishWithAgree:(BOOL)arg2 ;
-(id)offlineWarrantyController;
-(BOOL)warrantySentinelExists;
-(void)setWarrantySentinelExists:(BOOL)arg1 ;
-(NSData *)onlineTerms;
-(void)setOnlineTerms:(NSData *)arg1 ;
-(RUIPage *)loadingPage;
-(void)setLoadingPage:(RUIPage *)arg1 ;
-(NSData *)offlineLicense;
-(void)setOfflineLicense:(NSData *)arg1 ;
-(NSData *)offlineMultiterms;
-(void)setOfflineMultiterms:(NSData *)arg1 ;
-(NSData *)offlineWarranty;
-(void)setOfflineWarranty:(NSData *)arg1 ;
-(BuddySimpleTCController *)offlineLicenseVC;
-(void)setOfflineLicenseVC:(BuddySimpleTCController *)arg1 ;
-(BuddySimpleTCController *)offlineWarrantyVC;
-(void)setOfflineWarrantyVC:(BuddySimpleTCController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setLoader:(RUILoader *)arg1 ;
-(id)_navigationController;
-(BOOL)holdBeforeDisplaying;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(NSMutableArray *)objectModels;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)setObjectModels:(NSMutableArray *)arg1 ;
-(RUILoader *)loader;
@end

