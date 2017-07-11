/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSDate, MPStoreArtworkRequestToken;

@interface MusicConnectItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _connectDictionary;
	NSDictionary* _ownerDictionary;
	NSDictionary* _adminDictionary;
	NSDictionary* _contentDictionary;
	id _adminID;

}

@property (nonatomic,copy,readonly) NSString * postURL; 
@property (nonatomic,copy,readonly) id postID; 
@property (getter=isAttributed,nonatomic,readonly) BOOL attributed; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,readonly) long long likeCount; 
@property (nonatomic,readonly) long long commentCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,copy,readonly) id ownerID; 
@property (nonatomic,copy,readonly) NSString * ownerName; 
@property (nonatomic,copy,readonly) NSString * ownerEntityType; 
@property (nonatomic,copy,readonly) NSString * ownerDisplayName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * ownerProfileArtworkRequestToken; 
@property (getter=isAdmin,nonatomic,readonly) BOOL admin; 
@property (nonatomic,copy,readonly) NSString * adminName; 
@property (nonatomic,copy,readonly) id adminID;                                                           //@synthesize adminID=_adminID - In the implementation block
@property (nonatomic,copy,readonly) id contentID; 
@property (nonatomic,copy,readonly) NSString * contentType; 
+(BOOL)supportsSecureCoding;
-(id)postID;
-(id)_connectDateCreatedFormatter;
-(id)artworkRequestTokenForDictionary:(id)arg1 forArtworkKey:(id)arg2 ;
-(id)initWithConnectDictionary:(id)arg1 ;
-(NSString *)postURL;
-(NSString *)ownerEntityType;
-(MPStoreArtworkRequestToken *)ownerProfileArtworkRequestToken;
-(NSString *)adminName;
-(id)adminId;
-(id)adminID;
-(BOOL)isAdmin;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(long long)shareCount;
-(id)contentID;
-(BOOL)isAttributed;
-(NSDate *)dateCreated;
-(long long)commentCount;
-(long long)likeCount;
-(NSString *)contentType;
-(NSString *)ownerDisplayName;
-(NSString *)ownerName;
-(id)ownerID;
@end

