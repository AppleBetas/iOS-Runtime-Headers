/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTRecencyUtil : NSObject
+(id)defaultEpisodeToPlayForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 ;
+(id)episodeToResumeWithContext:(id)arg1 ;
+(id)episodeMostRecentlyPlayedWithContext:(id)arg1 ;
@end

