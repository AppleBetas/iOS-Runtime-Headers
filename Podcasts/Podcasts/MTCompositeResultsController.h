/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTResultsController.h>
#import <Podcasts/MTResultsControllerDelegate.h>

@protocol MTResultsControllerDelegate;
@class NSArray, NSString;

@interface MTCompositeResultsController : MTResultsController <MTResultsControllerDelegate> {

	id<MTResultsControllerDelegate> delegate;
	NSArray* _controllers;

}

@property (nonatomic,readonly) NSArray * controllers;               //@synthesize controllers=_controllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithControllers:(id)arg1 ;
-(unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1 ;
-(id)initWithControllers:(id)arg1 ;
-(void)_setControllers:(id)arg1 ;
-(id)controllerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfController:(id)arg1 ;
-(id)indexPathsForObject:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)delegate;
-(id)allObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(NSArray *)controllers;
-(BOOL)hasObjects;
@end

