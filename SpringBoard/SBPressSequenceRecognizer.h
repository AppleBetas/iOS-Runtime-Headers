/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBPressSequenceRecognizerDelegate;
@class BSTimer, SBPressTuple, NSMutableArray, SBPressSequenceValidator;

@interface SBPressSequenceRecognizer : NSObject {

	double _lastPressDownEvent;
	double _lastPressUpEvent;
	BSTimer* _watchdogTimer;
	SBPressTuple* _currentPressTuple;
	NSMutableArray* _currentSequence;
	id<SBPressSequenceRecognizerDelegate> _delegate;
	SBPressSequenceValidator* _validator;
	unsigned long long _numberOfPresses;

}

@property (assign,nonatomic,__weak) id<SBPressSequenceRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBPressSequenceValidator * validator;                             //@synthesize validator=_validator - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPresses;                               //@synthesize numberOfPresses=_numberOfPresses - In the implementation block
-(unsigned long long)numberOfPresses;
-(void)registerPressDownWithTimestamp:(double)arg1 ;
-(void)registerPressUpWithTimestamp:(double)arg1 ;
-(void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2 ;
-(id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2 ;
-(void)_handlePressDownWithTimestamp:(double)arg1 ;
-(void)_handlePressUpWithTimestamp:(double)arg1 ;
-(void)_resetAndNotify;
-(void)_resetWatchdogIfNecessary;
-(void)_resetAfterDelay:(double)arg1 ;
-(id)init;
-(void)setDelegate:(id<SBPressSequenceRecognizerDelegate>)arg1 ;
-(id<SBPressSequenceRecognizerDelegate>)delegate;
-(void)_reset;
-(SBPressSequenceValidator *)validator;
-(void)_complete;
@end

