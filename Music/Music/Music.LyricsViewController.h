/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <Music/Music.LyricsTextViewControllerDelegate.h>

@class _TtC5Music24LyricsTextViewController, UILabel;

@interface Music.LyricsViewController : UIViewController <UIAdaptivePresentationControllerDelegate, Music.LyricsTextViewControllerDelegate> {

	 lyricsTextViewController;
	 titleLabel;
	 subtitleLabel;

}

@property (readonly,nonatomic) _TtC5Music24LyricsTextViewController * lyricsTextViewController; 
@property (readonly,nonatomic) UILabel * titleLabel; 
@property (readonly,nonatomic) UILabel * subtitleLabel; 
-(_TtC5Music24LyricsTextViewController *)lyricsTextViewController;
-(void)lyricsTextDidChangeWithLyricsTextViewController:(id)arg1 ;
-(void)lyricsTextRequestsDismissalWithLyricsTextViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)lyricsVisibilityDidChangeWithLyricsTextViewController:(id)arg1 ;
-(void)updateLyricsVisibilityStatus;
-(id)initWithSong:(id)arg1 modelPlayEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewDidLoad;
-(UILabel *)subtitleLabel;
@end

