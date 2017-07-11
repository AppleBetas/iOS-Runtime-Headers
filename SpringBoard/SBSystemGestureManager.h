/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSSet, UIGestureRecognizer, NSString;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding> {

	FBSDisplay* _display;
	NSMutableDictionary* _typeToGesture;
	NSMutableDictionary* _typeToState;
	NSMutableSet* _recognizingTouchGestures;
	NSMutableSet* _touchGestures;
	NSSet* _gesturesPreventedByStylus;
	UIGestureRecognizer* _stylusPriorityRecognizer;
	BOOL _systemGesturesDisabledForAccessibility;

}

@property (getter=isAnyTouchGestureRunning,nonatomic,readonly) BOOL anyTouchGestureRunning; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) BOOL systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (nonatomic,retain) NSSet * gesturesPreventedByStylus;                                                                         //@synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(BOOL)areSystemGesturesDisabledForAccessibility;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(BOOL)isAnyTouchGestureRunning;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)setGesturesPreventedByStylus:(NSSet *)arg1 ;
-(void)_evaluateEnablement;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(NSSet *)gesturesPreventedByStylus;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)removeGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(FBSDisplay *)display;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)windowForSystemGestures;
-(BOOL)isGestureWithTypeAllowed:(unsigned long long)arg1 ;
@end

