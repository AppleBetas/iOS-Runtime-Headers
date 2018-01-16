/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@interface MTLibrary : NSObject {

	BOOL _iTunesMatchEnabled;
	id _cloudClient;
	BOOL _subscriptionSyncEnabled;
	BOOL _updateInProgress;

}

@property (getter=isSubscriptionSyncEnabled,nonatomic,readonly) BOOL subscriptionSyncEnabled;              //@synthesize subscriptionSyncEnabled=_subscriptionSyncEnabled - In the implementation block
@property (assign,getter=isUpdateInProgress,nonatomic) BOOL updateInProgress;                              //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(BOOL)isSupportedUrlString:(id)arg1 ;
+(id)currentPodcastSortDescriptors;
+(id)sortDescriptorsForAllPodcasts;
+(id)sharedInstance;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned long long)freeSpace;
-(id)mainQueueContext;
-(void)deleteHiddenPodcasts;
-(void)updateiTunesPlaylistForiTunesMatchState;
-(id)privateQueueContext;
-(BOOL)iTunesMatchEnabled;
-(id)lastUpdatedDateString;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ;
-(id)mainOrPrivateContext;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ctx:(id)arg3 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ctx:(id)arg3 ;
-(BOOL)isSubscribedToPodcastWithUuid:(id)arg1 ;
-(void)_deletePodcastWithUuid:(id)arg1 forced:(BOOL)arg2 ctx:(id)arg3 ;
-(void)removeDownloadAssetsForEpisodes:(id)arg1 forced:(BOOL)arg2 ;
-(void)_deleteHiddenPodcasts;
-(void)_deletePodcastWithId:(id)arg1 ctx:(id)arg2 ;
-(void)deletePlaylist:(id)arg1 ;
-(void)_deletePodcast:(id)arg1 ctx:(id)arg2 ;
-(void)_deleteEpisodeUuids:(id)arg1 forced:(BOOL)arg2 save:(BOOL)arg3 ;
-(BOOL)canDeleteEpisode:(id)arg1 ;
-(void)_deleteEpisodeUuids:(id)arg1 forced:(BOOL)arg2 ;
-(void)deletePodcastWithUuid:(id)arg1 ;
-(void)setPlayed:(BOOL)arg1 manually:(BOOL)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(BOOL)arg4 ;
-(id)carPlayContext;
-(id)lastUpdatedDateAttributedString;
-(void)finishPlayingEpisodeUuid:(id)arg1 ;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 ;
-(void)markPlaylistsForUpdateForPodcastUuids:(id)arg1 ;
-(BOOL)isSubscribedToPodcastWithFeedUrl:(id)arg1 ;
-(void)deleteFromSyncPodcastsWithUuids:(id)arg1 ;
-(void)deleteEpisodeUuids:(id)arg1 ;
-(void)deleteOrphanedEpisodes;
-(void)deleteAllPodcasts;
-(void)deleteAllTopLevelStationsExcludingFolders;
-(void)markAsSaved:(BOOL)arg1 forEpisodeUuids:(id)arg2 ;
-(void)setPlayed:(BOOL)arg1 manually:(BOOL)arg2 forUserActionOnEpisodeUuid:(id)arg3 ;
-(void)removeDownloadAssetsForEpisodeUuids:(id)arg1 ;
-(BOOL)isSubscriptionSyncEnabled;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(id)importContext;
-(id)init;
-(id)copy;
-(BOOL)isUpdateInProgress;
-(void)_userDefaultsDidChange:(id)arg1 ;
@end

