/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKUIComposeReviewViewDelegate.h>

@protocol SKUIComposeReviewFormDelegate;
@class SKUIComposeReviewView, SKUIReviewMetadata, NSString;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {

	SKUIComposeReviewView* _composeView;
	id<SKUIComposeReviewFormDelegate> _delegate;
	SKUIReviewMetadata* _review;

}

@property (assign,nonatomic,__weak) id<SKUIComposeReviewFormDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) SKUIReviewMetadata * editedReviewMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIComposeReviewFormDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIComposeReviewFormDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancel;
-(void)setRating:(float)arg1 ;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(id)initWithReviewMetadata:(id)arg1 ;
-(void)_submit;
-(void)composeReviewViewValidityChanged:(id)arg1 ;
@end

