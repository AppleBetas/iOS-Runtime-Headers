/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:04 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/ADPrivacyViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUITrendingSearchView, SKUITrendingSearchTemplateElement, UIViewController, NSString;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <ADPrivacyViewControllerDelegate, SKUIDocumentViewController> {

	SKUITrendingSearchView* _resultsView;
	SKUITrendingSearchTemplateElement* _template;
	UIViewController* _privacyViewController;

}

@property (nonatomic,retain) SKUITrendingSearchView * resultsView;                      //@synthesize resultsView=_resultsView - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchTemplateElement * template;              //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) UIViewController * privacyViewController;                  //@synthesize privacyViewController=_privacyViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)documentDidUpdate:(id)arg1 ;
-(id)impressionableViewElements;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)setTemplate:(SKUITrendingSearchTemplateElement *)arg1 ;
-(void)_reloadResultsView;
-(SKUITrendingSearchView *)resultsView;
-(UIEdgeInsets)_resultsViewContentInset;
-(void)resultsViewTapRecognized:(id)arg1 ;
-(SKUITrendingSearchTemplateElement *)template;
-(void)searchResultButtonTapped:(id)arg1 ;
-(void)setPrivacyViewController:(UIViewController *)arg1 ;
-(void)adPrivacyViewControllerDidLoad:(id)arg1 ;
-(void)adPrivacyViewControllerDidDismiss:(id)arg1 ;
-(void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setResultsView:(SKUITrendingSearchView *)arg1 ;
-(UIViewController *)privacyViewController;
@end

