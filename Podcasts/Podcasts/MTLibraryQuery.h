/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPredicate;

@interface MTLibraryQuery : NSObject {

	BOOL _active;
	NSArray* _podcastResults;
	NSArray* _episodeResults;
	NSPredicate* _podcastPredicate;
	NSPredicate* _episodePredicate;
	NSArray* _podcastSortDescriptors;
	NSArray* _episodeSortDescriptors;
	/*^block*/id _action;

}

@property (nonatomic,retain) NSArray * podcastResults;                      //@synthesize podcastResults=_podcastResults - In the implementation block
@property (nonatomic,retain) NSArray * episodeResults;                      //@synthesize episodeResults=_episodeResults - In the implementation block
@property (nonatomic,retain) NSPredicate * podcastPredicate;                //@synthesize podcastPredicate=_podcastPredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * episodePredicate;                //@synthesize episodePredicate=_episodePredicate - In the implementation block
@property (nonatomic,retain) NSArray * podcastSortDescriptors;              //@synthesize podcastSortDescriptors=_podcastSortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * episodeSortDescriptors;              //@synthesize episodeSortDescriptors=_episodeSortDescriptors - In the implementation block
@property (nonatomic,copy) id action;                                       //@synthesize action=_action - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                   //@synthesize active=_active - In the implementation block
-(NSArray *)podcastResults;
-(NSArray *)episodeResults;
-(void)setPodcastResults:(NSArray *)arg1 ;
-(void)setEpisodeResults:(NSArray *)arg1 ;
-(void)setPodcastPredicate:(NSPredicate *)arg1 ;
-(void)setEpisodePredicate:(NSPredicate *)arg1 ;
-(void)runQuery;
-(void)runQueryInContext:(id)arg1 ;
-(void)runQueryWithPodcastPredicate:(id)arg1 episodePredicate:(id)arg2 ;
-(NSPredicate *)podcastPredicate;
-(NSPredicate *)episodePredicate;
-(NSArray *)podcastSortDescriptors;
-(void)setPodcastSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)episodeSortDescriptors;
-(void)setEpisodeSortDescriptors:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isActive;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
@end

