/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MTSettingsGroup : NSObject {

	NSString* _groupTitle;
	NSString* _groupFooter;
	/*^block*/id _settingsHandler;
	NSArray* _groupSettings;

}

@property (nonatomic,copy) NSString * groupTitle;                //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,copy) NSArray * groupSettings;              //@synthesize groupSettings=_groupSettings - In the implementation block
@property (nonatomic,copy) id settingsHandler;                   //@synthesize settingsHandler=_settingsHandler - In the implementation block
@property (nonatomic,copy) NSString * groupFooter;               //@synthesize groupFooter=_groupFooter - In the implementation block
+(id)groupWithTitle:(id)arg1 footerText:(id)arg2 settings:(id)arg3 ;
+(id)groupWithTitle:(id)arg1 footerText:(id)arg2 settingsHandler:(/*^block*/id)arg3 ;
-(void)setGroupFooter:(NSString *)arg1 ;
-(void)setGroupSettings:(NSArray *)arg1 ;
-(void)setSettingsHandler:(id)arg1 ;
-(NSArray *)groupSettings;
-(NSString *)groupFooter;
-(id)settingsHandler;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
@end

