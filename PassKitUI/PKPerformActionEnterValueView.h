/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:22 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPerformActionView.h>

@protocol PKPerformActionViewDelegate, PKPaymentDataProvider;
@class UILabel, UITextField, PKEnterValueNewBalanceView, PKNumberPadSuggestionsView, PKPass, PKPaymentPassAction, PKNumericSuggestionsEnterValueAlgorithm, PKNumericSuggestionLastInput, PKFelicaPassProperties, NSDecimalNumber, NSNumberFormatter, NSString;

@interface PKPerformActionEnterValueView : UIView <PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKPerformActionView> {

	UILabel* _currencySymbolLabel;
	UILabel* _amountLabel;
	UITextField* _amountTextField;
	PKEnterValueNewBalanceView* _newBalanceView;
	PKNumberPadSuggestionsView* _suggestionView;
	PKPass* _pass;
	PKPaymentPassAction* _action;
	PKNumericSuggestionsEnterValueAlgorithm* _suggestionGenerator;
	PKNumericSuggestionLastInput* _lastInput;
	PKFelicaPassProperties* _felicaProperties;
	NSDecimalNumber* _currentAmount;
	NSNumberFormatter* _currentAmountFormatter;
	id<PKPerformActionViewDelegate> _delegate;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _minAmount;
	NSDecimalNumber* _maxAmount;

}

@property (nonatomic,copy) NSDecimalNumber * cardBalance;                                  //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minAmount;                                    //@synthesize minAmount=_minAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxAmount;                                    //@synthesize maxAmount=_maxAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPerformActionViewDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_createSubviews;
-(id)pass;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2 ;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(id)transactionAmount;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)serviceProviderData;
-(id)transactionCurrency;
-(void)willDismissViewController;
-(void)saveLastInputValues;
-(NSDecimalNumber *)minAmount;
-(NSDecimalNumber *)maxAmount;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxAmount:(NSDecimalNumber *)arg1 ;
-(void)setMinAmount:(NSDecimalNumber *)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 ;
-(void)_readCurrentBalance;
-(double)_amountTopPadding;
-(double)_topPaddingForCurrencySymbol;
-(BOOL)_isCurrentAmountValid;
-(void)_updateCurrentBalanceWithUpdatedFelicaProperties;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)_shouldShakeCard:(id)arg1 ;
-(unsigned long long)_mantissaFromAmountDecimalNumber:(id)arg1 ;
-(id)_amountDecimalNumberWithMantissa:(unsigned long long)arg1 ;
-(NSDecimalNumber *)cardBalance;
@end

