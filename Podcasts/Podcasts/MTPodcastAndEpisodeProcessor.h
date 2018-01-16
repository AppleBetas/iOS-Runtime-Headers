/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTBaseProcessor.h>

@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor {

	NSMutableDictionary* _episodeObservers;

}

@property (nonatomic,retain) NSMutableDictionary * episodeObservers;              //@synthesize episodeObservers=_episodeObservers - In the implementation block
-(void)updateEpisodePredicates;
-(id)podcastPredicate;
-(id)podcastUuids;
-(id)episodeUuids;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(void)episodeResultsChangedForPodcast:(id)arg1 withDeletedIds:(id)arg2 andInsertIds:(id)arg3 ;
-(NSMutableDictionary *)episodeObservers;
-(void)addEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg1 ;
-(id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)removeEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodeObserverForPodcastUuid:(id)arg1 ;
-(void)setEpisodeObservers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)predicate;
-(id)entityName;
@end

