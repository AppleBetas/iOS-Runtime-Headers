/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:22 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface PKPerformActionSelectItemExpiresHeader : UIView {

	UILabel* _leadingLabel;
	UILabel* _trailingLabel;
	NSString* _leadingString;
	NSString* _trailingString;

}

@property (nonatomic,retain) NSString * leadingString;               //@synthesize leadingString=_leadingString - In the implementation block
@property (nonatomic,retain) NSString * trailingString;              //@synthesize trailingString=_trailingString - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setLeadingString:(NSString *)arg1 ;
-(void)setTrailingString:(NSString *)arg1 ;
-(NSString *)leadingString;
-(NSString *)trailingString;
@end

