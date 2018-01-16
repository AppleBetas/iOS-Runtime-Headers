/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class NSString, MPArtworkCatalog, NSArray, UIView, UIColor, UIButton;

@interface Music.TitleSectionHeaderView : UICollectionReusableView {

	 forSizing;
	 title;
	 titleMaximumNumberOfLines;
	 subtitle;
	 imageStyleButtonArtworkPlaceholder;
	 imageStyleButtonArtworkCatalog;
	 imageStyleButtonSize;
	 systemStyleButtonAttributedTitle;
	 systemStyleButtonPossibleAttributedTitles;
	 buttonHandler;
	 compactLayoutStyle;
	 regularLayoutStyle;
	 additionalContentView;
	 additionalContentViewReservedWidth;
	 _currentPreferredHeight;
	 isTopHairlineVisible;
	 isBottomHairlineVisible;
	 textDrawingCache;
	 textComponents;
	 topHairlineView;
	 bottomHairlineView;
	 _isTopHairlineVisible;
	 _isBottomHairlineVisible;
	 titleTextDrawingView;
	 subtitleTextDrawingView;
	 systemStyleButton;
	 imageButton;
	 floatingBackgroundView;
	 floating;
	 layoutStyle;
	 externalBackgroundColor;

}

@property (assign,nonatomic) BOOL forSizing; 
@property (copy,nonatomic) NSString * title; 
@property (assign,nonatomic) long long titleMaximumNumberOfLines; 
@property (copy,nonatomic) NSString * subtitle; 
@property (retain,nonatomic) MPArtworkCatalog * imageStyleButtonArtworkCatalog; 
@property (assign,nonatomic) CGSize imageStyleButtonSize; 
@property (copy,nonatomic) NSString * systemStyleButtonTitle; 
@property (copy,nonatomic) NSArray * systemStyleButtonPossibleTitles; 
@property (copy,nonatomic) id buttonHandler; 
@property (retain,nonatomic) UIView * additionalContentView; 
@property (assign,nonatomic) double additionalContentViewReservedWidth; 
@property (readonly,nonatomic) double currentPreferredHeight; 
@property (assign,nonatomic) BOOL isTopHairlineVisible; 
@property (assign,nonatomic) BOOL isBottomHairlineVisible; 
@property (assign,nonatomic) BOOL floating; 
@property (retain,nonatomic) UIColor * backgroundColor; 
@property (readonly,nonatomic) UIView * accessibilityAdditionalContentView; 
@property (readonly,nonatomic) UIButton * accessibilitySystemStyleButton; 
@property (readonly,nonatomic) UIButton * accessibilityImageButton; 
+(id)reuseIdentifier;
-(BOOL)isTopHairlineVisible;
-(void)setIsTopHairlineVisible:(BOOL)arg1 ;
-(BOOL)forSizing;
-(void)setForSizing:(BOOL)arg1 ;
-(void)setTitleMaximumNumberOfLines:(long long)arg1 ;
-(MPArtworkCatalog *)imageStyleButtonArtworkCatalog;
-(void)setImageStyleButtonArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(CGSize)imageStyleButtonSize;
-(void)setImageStyleButtonSize:(CGSize)arg1 ;
-(NSString *)systemStyleButtonTitle;
-(void)setSystemStyleButtonTitle:(NSString *)arg1 ;
-(NSArray *)systemStyleButtonPossibleTitles;
-(void)setSystemStyleButtonPossibleTitles:(NSArray *)arg1 ;
-(double)additionalContentViewReservedWidth;
-(void)setAdditionalContentViewReservedWidth:(double)arg1 ;
-(double)currentPreferredHeight;
-(BOOL)isBottomHairlineVisible;
-(void)setIsBottomHairlineVisible:(BOOL)arg1 ;
-(UIView *)accessibilityAdditionalContentView;
-(UIButton *)accessibilitySystemStyleButton;
-(UIButton *)accessibilityImageButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)floating;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)applyLayoutAttributes:(id)arg1 ;
-(long long)titleMaximumNumberOfLines;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)setAdditionalContentView:(UIView *)arg1 ;
-(UIView *)additionalContentView;
-(id)buttonHandler;
-(void)setButtonHandler:(id)arg1 ;
@end

