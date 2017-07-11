/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUICommentDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIMediaSocialAuthor, SKUIStackDocumentViewController, NSArray, SKUIViewElementLayoutContext, NSMutableSet, SKUICommentPostBarView, SKUIStackTemplateElement, SKUICommentTemplateViewElement, SKUILayoutCache, NSString;

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController> {

	SKUIMediaSocialAuthor* _authorForActiveAccount;
	SKUIStackDocumentViewController* _childViewController;
	NSArray* _commenters;
	BOOL _didShowKeyboard;
	BOOL _keyboardVisible;
	CGRect _keyboardRect;
	SKUIViewElementLayoutContext* _layoutContext;
	NSMutableSet* _observedArtworkRequestIDs;
	SKUICommentPostBarView* _postView;
	BOOL _scrollNewCommentToView;
	long long _selectedCommenter;
	SKUIStackTemplateElement* _stackTemplateElement;
	SKUICommentTemplateViewElement* _templateElement;
	SKUILayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_layoutContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4 ;
-(void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3 ;
-(void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)_keyboardDidHideChangeNotification:(id)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(void)updateStackElement:(id)arg1 withView:(id)arg2 ;
-(void)_layoutScrollView:(double)arg1 ;
-(void)_checkAdminStatus;
-(void)_layoutKeyboard;
-(void)_reloadContentSize:(double)arg1 ;
-(id)_getSelectedCommenter;
-(void)_changeCommenter;
-(void)_setSelectedCommenter:(long long)arg1 ;
-(void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(BOOL)arg2 applyKeyboardOffset:(BOOL)arg3 ;
-(void)_preloadCommenterImages;
@end

