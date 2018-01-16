/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@interface MTManagedObjectContext : NSManagedObjectContext {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2 ;
-(void)validateConcurencyType;
-(void)handleError:(id*)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2 ;
-(void)insertObject:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectWithID:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
@end

