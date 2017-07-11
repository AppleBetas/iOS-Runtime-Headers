/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSFetchRequest, NSArray, NSManagedObjectContext;


@protocol MTFetchedResultsControllerProtocol
@property (nonatomic,readonly) NSFetchRequest * fetchRequest; 
@property (nonatomic,copy) NSArray * propertyKeys; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate; 
@required
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
-(BOOL)performFetch:(id*)arg1;
-(id)indexPathForObject:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(NSManagedObjectContext *)managedObjectContext;
-(NSFetchRequest *)fetchRequest;
-(NSArray *)fetchedObjects;
-(id)objectAtIndexPath:(id)arg1;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(id)arg1;

@end

