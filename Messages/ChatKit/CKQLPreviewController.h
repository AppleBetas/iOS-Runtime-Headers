/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	BOOL _controllerWasDismissed;
	NSArray* _previewItems;

}

@property (assign,nonatomic) BOOL controllerWasDismissed;              //@synthesize controllerWasDismissed=_controllerWasDismissed - In the implementation block
@property (nonatomic,copy) NSArray * previewItems;                     //@synthesize previewItems=_previewItems - In the implementation block
-(id)init;
-(void)setDataSource:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)previewActions;
-(id)currentPreviewItem;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(BOOL)controllerWasDismissed;
-(void)setControllerWasDismissed:(BOOL)arg1 ;
-(NSArray *)previewItems;
@end

