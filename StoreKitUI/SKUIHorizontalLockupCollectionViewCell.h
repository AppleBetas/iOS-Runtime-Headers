/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:59 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <UIKit/UIScrollViewAccessibilityDelegate.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIButton, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, UIImageView, UIView, SKUIHorizontalLockupView, UIColor, NSString;

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView> {

	UIButton* _actionButton;
	SKUIButtonViewElement* _actionButtonViewElement;
	SKUICellScrollView* _actionsScrollView;
	UIEdgeInsets _contentInset;
	SKUICheckboxInputViewElement* _editModeCheckboxElement;
	UIImageView* _editModeControl;
	UIView* _highlightBackgroundView;
	SKUIHorizontalLockupView* _lockupView;
	UIColor* _lockupViewBackgroundColor;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                    //@synthesize contentInset=_contentInset - In the implementation block
@property (getter=isScrollingCellToHideActionButton,nonatomic,readonly) BOOL scrollingCellToHideActionButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(BOOL)isDeleteButtonHidden;
-(BOOL)isScrollingCellToHideActionButton;
-(void)hideDeleteButton;
-(void)_removeEditControlAnimated:(BOOL)arg1 ;
-(void)_addEditControlAnimated:(BOOL)arg1 ;
-(BOOL)_isActionsScrollViewEnabled;
-(void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2 ;
-(id)_editControlImage;
-(void)_reloadHighlightBackgroundView;
-(void)_reloadLockupViewBackgroundColor;
-(void)_actionButtonAction:(id)arg1 ;
-(id)_attributedStringForActionButton:(id)arg1 context:(id)arg2 ;
-(id)_highlightBackgroundColor;
@end

