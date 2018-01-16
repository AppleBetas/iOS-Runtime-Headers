/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AEAnnotationHTMLGeneratorDelegate;
@class NSString;

@interface AEAnnotationHTMLGenerator : NSObject {

	id<AEAnnotationHTMLGeneratorDelegate> _delegate;
	NSString* _title;
	NSString* _author;
	NSString* _sortAuthor;
	NSString* _publisherLocation;
	NSString* _publisherName;
	NSString* _publisherYear;
	BOOL _useInlineImages;

}

@property (nonatomic,retain) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * author;                                           //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * sortAuthor;                                       //@synthesize sortAuthor=_sortAuthor - In the implementation block
@property (nonatomic,retain) NSString * publisherLocation;                                //@synthesize publisherLocation=_publisherLocation - In the implementation block
@property (nonatomic,retain) NSString * publisherName;                                    //@synthesize publisherName=_publisherName - In the implementation block
@property (nonatomic,retain) NSString * publisherYear;                                    //@synthesize publisherYear=_publisherYear - In the implementation block
@property (assign,nonatomic) id<AEAnnotationHTMLGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useInlineImages;                                        //@synthesize useInlineImages=_useInlineImages - In the implementation block
-(id)highlightCSSForAnnotationStyle:(int)arg1 underline:(BOOL)arg2 ;
-(BOOL)useInlineImages;
-(id)replaceNewlines:(id)arg1 ;
-(NSString *)publisherLocation;
-(NSString *)publisherYear;
-(NSString *)sortAuthor;
-(id)cleanString:(id)arg1 ;
-(id)highlightCSSForAnnotationStyle:(int)arg1 ;
-(id)documentString;
-(void)setSortAuthor:(NSString *)arg1 ;
-(void)setPublisherLocation:(NSString *)arg1 ;
-(void)setPublisherName:(NSString *)arg1 ;
-(void)setPublisherYear:(NSString *)arg1 ;
-(void)setUseInlineImages:(BOOL)arg1 ;
-(void)setDelegate:(id<AEAnnotationHTMLGeneratorDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id<AEAnnotationHTMLGeneratorDelegate>)delegate;
-(NSString *)title;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)publisherName;
@end

