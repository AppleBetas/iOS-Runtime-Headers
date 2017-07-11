/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSData;

@interface MTJSPlayabckRequest : NSObject {

	BOOL _firstItemIsRestricted;
	NSString* _featureName;
	NSArray* _items;
	NSData* _recommendationData;
	unsigned long long _shuffleMode;
	unsigned long long _startIndex;
	unsigned long long _upNextAction;

}

@property (nonatomic,copy,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;              //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleMode;                //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndex;                 //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long upNextAction;               //@synthesize upNextAction=_upNextAction - In the implementation block
@property (nonatomic,readonly) BOOL firstItemIsRestricted;                    //@synthesize firstItemIsRestricted=_firstItemIsRestricted - In the implementation block
-(BOOL)firstItemIsRestricted;
-(id)init;
-(NSArray *)items;
-(unsigned long long)startIndex;
-(unsigned long long)shuffleMode;
-(NSString *)featureName;
-(NSData *)recommendationData;
-(id)initWithJSDictionary:(id)arg1 ;
-(unsigned long long)upNextAction;
@end

