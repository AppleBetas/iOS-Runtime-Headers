/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:20 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIStackView.h>

@protocol PKNumberPadSuggestionsViewDelegate;
@class NSArray;

@interface PKNumberPadSuggestionsView : UIStackView {

	id<PKNumberPadSuggestionsViewDelegate> _delegate;
	NSArray* _suggestions;

}

@property (assign,nonatomic,__weak) id<PKNumberPadSuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                 //@synthesize suggestions=_suggestions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKNumberPadSuggestionsViewDelegate>)arg1 ;
-(id<PKNumberPadSuggestionsViewDelegate>)delegate;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(id)initWithDefaultFrame;
-(void)_selectedSuggestion:(id)arg1 ;
@end

