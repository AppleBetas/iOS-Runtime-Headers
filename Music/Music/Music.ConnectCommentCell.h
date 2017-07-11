/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionViewTableCell.h>

@class NSString, NSDate;

@interface Music.ConnectCommentCell : UICollectionViewTableCell {

	 authorName;
	 authorDisplayName;
	 creationDate;
	 message;
	 textDrawingCache;
	 topHairlineView;
	 authorTextDrawingView;
	 authorDisplayNameTextDrawingView;
	 creationDateTextDrawingView;
	 messageTextDrawingView;
	 textComponents;

}

@property (copy,nonatomic) NSString * authorName; 
@property (copy,nonatomic) NSString * authorDisplayName; 
@property (copy,nonatomic) NSDate * creationDate; 
@property (copy,nonatomic) NSString * message; 
+(id)reuseIdentifier;
-(double)heightFor:(id)arg1 traitCollection:(id)arg2 fittingWidth:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)authorDisplayName;
-(void)setAuthorDisplayName:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
@end

