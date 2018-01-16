/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTResultsChangeGeneratorDelegate;
#import <Podcasts/Podcasts-Structs.h>
@interface MTResultsChangeGenerator : NSObject {

	id<MTResultsChangeGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTResultsChangeGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)generateChangesForExistingObjects:(id)arg1 newObjects:(id)arg2 inSection:(unsigned long long)arg3 ;
-(NSMutableDictionary*)objectsToIndexPathDictionary:(id)arg1 inSection:(unsigned long long)arg2 ;
-(id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(NSMutableDictionary*)arg3 autoremove:(BOOL)arg4 ;
-(void)removeIndexPath:(id)arg1 forObject:(id)arg2 fromMap:(NSMutableDictionary*)arg3 ;
-(id)unbox:(id)arg1 ;
-(id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(NSMutableDictionary*)arg3 ;
-(id)box:(id)arg1 ;
-(id)closestIndexPathToRow:(unsigned long long)arg1 forIndexPaths:(NSMutableSet*)arg2 ;
-(void)setDelegate:(id<MTResultsChangeGeneratorDelegate>)arg1 ;
-(id<MTResultsChangeGeneratorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

