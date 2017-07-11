/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:54 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying> {

	BOOL _hasAlpha;
	unsigned long long _height;
	unsigned long long _length;
	NSString* _MD5;
	NSString* _token;
	NSString* _tokenType;
	NSString* _type;
	NSNumber* _uniqueIdentifier;
	unsigned long long _width;

}

@property (assign,nonatomic) BOOL hasAlpha;                          //@synthesize hasAlpha=_hasAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long height;              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,copy) NSString * MD5;                           //@synthesize MD5=_MD5 - In the implementation block
@property (nonatomic,copy) NSString * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * tokenType;                     //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,copy) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long width;               //@synthesize width=_width - In the implementation block
-(unsigned long long)length;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setHasAlpha:(BOOL)arg1 ;
-(void)setMD5:(NSString *)arg1 ;
-(void)setTokenType:(NSString *)arg1 ;
-(id)initWithUploadDictionary:(id)arg1 ;
-(BOOL)hasAlpha;
-(NSString *)MD5;
-(NSString *)tokenType;
@end

