/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPodcastAndEpisodeProcessor.h>

@class NSMutableDictionary, NSArray;

@interface MTPodcastDerivedPropertyObserver : MTPodcastAndEpisodeProcessor {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _podcastCache;
	NSArray* _podcastDependencies;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;                  //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastCache;              //@synthesize podcastCache=_podcastCache - In the implementation block
@property (nonatomic,retain) NSArray * podcastDependencies;                   //@synthesize podcastDependencies=_podcastDependencies - In the implementation block
-(id)countOfNewEpisodesForPodcast:(id)arg1 ;
-(id)countOfUnplayedEpisodesForPodcast:(id)arg1 ;
-(id)countOfAudioEpisodesForPodcast:(id)arg1 ;
-(id)dateOfNewestEpisodeForPodcast:(id)arg1 ;
-(void)removeDerivedPropertyChangeHandler:(id)arg1 ;
-(id)addDerivedPropertyChangeHandler:(/*^block*/id)arg1 ;
-(id)podcastPredicate;
-(id)countOfSavedEpisodesForPodcast:(id)arg1 ;
-(id)countOfFeedEpisodesForPodcast:(id)arg1 ;
-(id)createQueryObserver;
-(id)countOfUnplayedMediaEpisodesForPodcast:(id)arg1 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg1 ;
-(id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2 ;
-(void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3 ;
-(void)episodeResultsChangedForPodcastUuid:(id)arg1 ;
-(NSArray *)podcastDependencies;
-(void)reportStatsForPodcasts:(id)arg1 ;
-(void)updateEpisodePredicateForChangedResults:(id)arg1 ;
-(id)dateOfNewestEpisodeForEpisodes:(id)arg1 ;
-(id)uuidOfNewestEpisodeForEpisodes:(id)arg1 ;
-(id)countOfNewEpisodesForEpisodes:(id)arg1 ;
-(id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2 ;
-(id)countOfUnplayedMediaEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2 ;
-(id)countOfAudioEpisodesForEpisodes:(id)arg1 ;
-(id)countOfSavedEpisodesForEpisodes:(id)arg1 ;
-(id)countOfFeedEpisodesForEpisodes:(id)arg1 ;
-(id)countOfUserEpisodesForEpisodes:(id)arg1 andPredicateForUserEpisodes:(id)arg2 ;
-(void)updateUnplayedTabFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 ;
-(void)updateIsNewFlagForEpisodes:(id)arg1 predicateForUserEpisodes:(id)arg2 ;
-(BOOL)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3 ;
-(void)notifyObserversForPodcast:(id)arg1 ;
-(id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2 ;
-(id)derivedPropertiesForPodcast:(id)arg1 ;
-(id)uuidOfNewestEpisodeForPodcast:(id)arg1 ;
-(id)countOfUserEpisodesForPodcast:(id)arg1 ;
-(NSMutableDictionary *)podcastCache;
-(void)setPodcastCache:(NSMutableDictionary *)arg1 ;
-(void)setPodcastDependencies:(NSArray *)arg1 ;
-(id)init;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
@end

