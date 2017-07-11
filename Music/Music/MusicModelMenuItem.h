/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, MusicModelMenu;

@interface MusicModelMenuItem : MPModelObject {

	NSString* _title;
	MusicModelMenu* _submenu;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MusicModelMenu * submenu;              //@synthesize submenu=_submenu - In the implementation block
+(id)__MusicModelPropertyMenuItemTitle__PROPERTY;
+(id)__submenu__KEY;
+(id)__MusicModelRelationshipMenuItemSubmenu__PROPERTY;
+(id)__title__KEY;
-(MusicModelMenu *)submenu;
-(void)setSubmenu:(MusicModelMenu *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

