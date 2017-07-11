/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicModelConnectCommentItem, MusicModelConnectFeedItem, MusicModelConnectUser;

@interface MusicConnectContentItem : NSObject {

	MusicModelConnectCommentItem* _commentItem;
	MusicModelConnectFeedItem* _feedItem;
	MusicModelConnectUser* _connectUser;

}

@property (nonatomic,readonly) MusicModelConnectCommentItem * commentItem;              //@synthesize commentItem=_commentItem - In the implementation block
@property (nonatomic,readonly) MusicModelConnectFeedItem * feedItem;                    //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) MusicModelConnectUser * connectUser;                     //@synthesize connectUser=_connectUser - In the implementation block
+(id)__commentItem__KEY;
+(id)__MusicStoreBrowseContentItemRelationshipConnectCommentItem__PROPERTY;
+(id)__feedItem__KEY;
+(id)__MusicStoreBrowseContentItemRelationshipConnectFeedItem__PROPERTY;
+(id)__connectUser__KEY;
+(id)__MusicStoreBrowseContentItemRelationshipConnectUser__PROPERTY;
-(MusicModelConnectCommentItem *)commentItem;
-(MusicModelConnectUser *)connectUser;
-(MusicModelConnectFeedItem *)feedItem;
@end

