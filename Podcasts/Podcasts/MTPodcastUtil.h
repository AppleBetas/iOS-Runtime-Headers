/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPodcastUtil : NSObject
+(id)stringForFeedLastChangedForPodcastUuid:(id)arg1 forSizeClass:(long long)arg2 ;
+(id)stringForUnplayedAndSavedEpisodeCountsForPodcastUuid:(id)arg1 ;
+(id)stringForEpisodesInFeedCountForPodcastUuid:(id)arg1 ;
+(id)stringForEpisodeCount:(long long)arg1 ;
+(id)stringForMostRecentEpisodeCount:(long long)arg1 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 ;
+(id)stringForSavedEpisodeCount:(long long)arg1 ;
+(id)stringForNewEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(unsigned long long)countOfUnplayedEpisodesForPodcastUuid:(id)arg1 ;
+(unsigned long long)countOfSavedEpisodesForPodcastUuid:(id)arg1 ;
+(id)stringForUnplayedEpisodeCount:(unsigned long long)arg1 withSavedEpisodeCount:(unsigned long long)arg2 ;
+(unsigned long long)countOfEpisodesInFeedForPodcastUuid:(id)arg1 ;
+(id)stringForEpisodesInFeedCount:(long long)arg1 ;
+(id)dateOfNewestEpisodeForPodcastUuid:(id)arg1 ;
+(id)stringForATVFeedLastChangedForDate:(id)arg1 ;
+(id)stringForNewEpisodeCount:(long long)arg1 ;
+(id)stringForATVFeedLastChangedForPodcast:(id)arg1 ;
+(unsigned long long)episodeCountForPredicate:(id)arg1 ;
+(id)episodeTitlesForPredicate:(id)arg1 ;
@end

