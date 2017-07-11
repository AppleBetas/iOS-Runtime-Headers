/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:25 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@protocol CKBrowserDragViewControllerDelegate;
@class UILongPressGestureRecognizer, UIPanGestureRecognizer, CKAnimatedImage, NSMutableDictionary, UIImage, NSArray, UIView, CALayer, CADisplayLink, CKElasticFunction, NSString;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver> {

	BOOL _canScale;
	BOOL _canRotate;
	BOOL _canPeel;
	BOOL _pressed;
	BOOL _scaledDown;
	id<CKBrowserDragViewControllerDelegate> _delegate;
	double _dragViewScale;
	UILongPressGestureRecognizer* _gestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CKAnimatedImage* _dragImage;
	NSMutableDictionary* _peelMaskImageCache;
	UIImage* _currentFrameImage;
	NSArray* _dragImageFrames;
	UIView* _dragView;
	CALayer* _peelImageLayer;
	CALayer* _peelMaskLayer;
	double _initialScale;
	double _rotationAngle;
	CALayer* _shineLayer;
	CALayer* _shadowLayer;
	CALayer* _dropShadowLayer;
	CALayer* _peelLayer;
	CALayer* _meshLayer;
	CALayer* _perspectiveLayer;
	CADisplayLink* _displayLink;
	CKElasticFunction* _elasticFunctionPositionX;
	CKElasticFunction* _elasticFunctionPositionY;
	CKElasticFunction* _elasticFunctionRotation;
	double _elasticRotationAngle;
	CKElasticFunction* _elasticFunctionScaleX;
	CKElasticFunction* _elasticFunctionScaleY;
	double _elasticScaleX;
	double _elasticScaleY;
	CGPoint _anchorOffset;
	CGSize _initialSize;
	CGPoint _initialDragStartPosition;
	CGSize _rasterizedImageSize;
	CGPoint _previousPanLocationInView;
	CGPoint _meshLayerStartPosition;
	CGPoint _peelLayerStartPosition;
	CGPoint _shineLayerStartPosition;
	CGPoint _shadowLayerStartPosition;
	CGPoint _dropShadowLayerStartPosition;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                     //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                        //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * dragImage;                                          //@synthesize dragImage=_dragImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peelMaskImageCache;                             //@synthesize peelMaskImageCache=_peelMaskImageCache - In the implementation block
@property (nonatomic,retain) UIImage * currentFrameImage;                                          //@synthesize currentFrameImage=_currentFrameImage - In the implementation block
@property (nonatomic,retain) NSArray * dragImageFrames;                                            //@synthesize dragImageFrames=_dragImageFrames - In the implementation block
@property (nonatomic,retain) UIView * dragView;                                                    //@synthesize dragView=_dragView - In the implementation block
@property (nonatomic,retain) CALayer * peelImageLayer;                                             //@synthesize peelImageLayer=_peelImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * peelMaskLayer;                                              //@synthesize peelMaskLayer=_peelMaskLayer - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                    //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) CGPoint anchorOffset;                                                 //@synthesize anchorOffset=_anchorOffset - In the implementation block
@property (assign,nonatomic) CGSize initialSize;                                                   //@synthesize initialSize=_initialSize - In the implementation block
@property (assign,nonatomic) double initialScale;                                                  //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) CGPoint initialDragStartPosition;                                     //@synthesize initialDragStartPosition=_initialDragStartPosition - In the implementation block
@property (assign,nonatomic) CGSize rasterizedImageSize;                                           //@synthesize rasterizedImageSize=_rasterizedImageSize - In the implementation block
@property (assign,nonatomic) double dragViewScale;                                                 //@synthesize dragViewScale=_dragViewScale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                                 //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,nonatomic) CGPoint previousPanLocationInView;                                    //@synthesize previousPanLocationInView=_previousPanLocationInView - In the implementation block
@property (assign,nonatomic) CALayer * shineLayer;                                                 //@synthesize shineLayer=_shineLayer - In the implementation block
@property (assign,nonatomic) CALayer * shadowLayer;                                                //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (assign,nonatomic) CALayer * dropShadowLayer;                                            //@synthesize dropShadowLayer=_dropShadowLayer - In the implementation block
@property (assign,nonatomic) CALayer * peelLayer;                                                  //@synthesize peelLayer=_peelLayer - In the implementation block
@property (assign,nonatomic) CALayer * meshLayer;                                                  //@synthesize meshLayer=_meshLayer - In the implementation block
@property (assign,nonatomic) CALayer * perspectiveLayer;                                           //@synthesize perspectiveLayer=_perspectiveLayer - In the implementation block
@property (assign,nonatomic) CGPoint meshLayerStartPosition;                                       //@synthesize meshLayerStartPosition=_meshLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint peelLayerStartPosition;                                       //@synthesize peelLayerStartPosition=_peelLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint shineLayerStartPosition;                                      //@synthesize shineLayerStartPosition=_shineLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint shadowLayerStartPosition;                                     //@synthesize shadowLayerStartPosition=_shadowLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint dropShadowLayerStartPosition;                                 //@synthesize dropShadowLayerStartPosition=_dropShadowLayerStartPosition - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                          //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionPositionX;                         //@synthesize elasticFunctionPositionX=_elasticFunctionPositionX - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionPositionY;                         //@synthesize elasticFunctionPositionY=_elasticFunctionPositionY - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionRotation;                          //@synthesize elasticFunctionRotation=_elasticFunctionRotation - In the implementation block
@property (assign,nonatomic) double elasticRotationAngle;                                          //@synthesize elasticRotationAngle=_elasticRotationAngle - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionScaleX;                            //@synthesize elasticFunctionScaleX=_elasticFunctionScaleX - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionScaleY;                            //@synthesize elasticFunctionScaleY=_elasticFunctionScaleY - In the implementation block
@property (assign,nonatomic) double elasticScaleX;                                                 //@synthesize elasticScaleX=_elasticScaleX - In the implementation block
@property (assign,nonatomic) double elasticScaleY;                                                 //@synthesize elasticScaleY=_elasticScaleY - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                        //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isScaledDown,nonatomic) BOOL scaledDown;                                  //@synthesize scaledDown=_scaledDown - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserDragViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canScale;                                                        //@synthesize canScale=_canScale - In the implementation block
@property (assign,nonatomic) BOOL canRotate;                                                       //@synthesize canRotate=_canRotate - In the implementation block
@property (assign,nonatomic) BOOL canPeel;                                                         //@synthesize canPeel=_canPeel - In the implementation block
@property (nonatomic,readonly) CGPoint dragViewCenter; 
@property (nonatomic,readonly) double dragViewRotation; 
@property (nonatomic,readonly) double absoluteScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)meshTransform;
+(BOOL)supportsForceTouch;
+(id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2 ;
-(void)setDelegate:(id<CKBrowserDragViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKBrowserDragViewControllerDelegate>)delegate;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setPressed:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)viewDidLoad;
-(double)initialScale;
-(BOOL)isPressed;
-(void)gestureRecognized:(id)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(CGSize)initialSize;
-(id)initWithDragImage:(id)arg1 inSourceRect:(CGRect)arg2 withSourcePoint:(CGPoint)arg3 withGestureRecognizer:(id)arg4 ;
-(void)setCanScale:(BOOL)arg1 ;
-(void)setCanRotate:(BOOL)arg1 ;
-(void)setCanPeel:(BOOL)arg1 ;
-(void)animateBackToSourceCompletionBlock:(/*^block*/id)arg1 ;
-(void)animatePlacementAtPoint:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDragImage:(CKAnimatedImage *)arg1 ;
-(void)setAnchorOffset:(CGPoint)arg1 ;
-(void)setPeelMaskImageCache:(NSMutableDictionary *)arg1 ;
-(UIView *)dragView;
-(double)dragViewScale;
-(void)reversePeelAnimationToPoint:(CGPoint)arg1 forPlacement:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CKAnimatedImage *)dragImage;
-(void)setDragImageFrames:(NSArray *)arg1 ;
-(void)setInitialScale:(double)arg1 ;
-(void)setInitialSize:(CGSize)arg1 ;
-(void)setRasterizedImageSize:(CGSize)arg1 ;
-(void)setCurrentFrameImage:(UIImage *)arg1 ;
-(void)setDragView:(UIView *)arg1 ;
-(void)setUpPeelLayers;
-(void)panGestureRecognized:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)canPeel;
-(void)animatePeelWithCompletion:(/*^block*/id)arg1 ;
-(void)_attachElasticEffectsForLocation:(CGPoint)arg1 ;
-(void)_updateElasticEffectsForLocation:(CGPoint)arg1 ;
-(BOOL)_orbScalingEnabled;
-(BOOL)canScale;
-(void)setDragViewScale:(double)arg1 ;
-(CGPoint)dragViewCenter;
-(double)absoluteScale;
-(double)dragViewRotation;
-(void)_detachElasticEffects;
-(void)commitDrag;
-(void)setPreviousPanLocationInView:(CGPoint)arg1 ;
-(CGPoint)previousPanLocationInView;
-(BOOL)canRotate;
-(void)_displayLinkCallback:(id)arg1 ;
-(BOOL)isScaledDown;
-(void)setScaledDown:(BOOL)arg1 ;
-(void)animateScaleDown;
-(CGPoint)anchorOffset;
-(void)applyTransforms;
-(NSArray *)dragImageFrames;
-(CALayer *)peelImageLayer;
-(NSMutableDictionary *)peelMaskImageCache;
-(id)peelMaskImageFromImage:(id)arg1 ;
-(CALayer *)peelMaskLayer;
-(UIImage *)currentFrameImage;
-(id)scaleImage:(id)arg1 toSize:(CGSize)arg2 ;
-(void)setPerspectiveLayer:(CALayer *)arg1 ;
-(void)setMeshLayer:(CALayer *)arg1 ;
-(void)setMeshLayerStartPosition:(CGPoint)arg1 ;
-(void)setPeelLayer:(CALayer *)arg1 ;
-(void)setPeelLayerStartPosition:(CGPoint)arg1 ;
-(void)setPeelImageLayer:(CALayer *)arg1 ;
-(void)setPeelMaskLayer:(CALayer *)arg1 ;
-(void)setShineLayer:(CALayer *)arg1 ;
-(void)setShineLayerStartPosition:(CGPoint)arg1 ;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(void)setShadowLayerStartPosition:(CGPoint)arg1 ;
-(void)setDropShadowLayer:(CALayer *)arg1 ;
-(void)setDropShadowLayerStartPosition:(CGPoint)arg1 ;
-(CALayer *)dropShadowLayer;
-(CALayer *)meshLayer;
-(CALayer *)peelLayer;
-(CALayer *)shineLayer;
-(CALayer *)shadowLayer;
-(CGPoint)dropShadowLayerStartPosition;
-(CGPoint)meshLayerStartPosition;
-(CGPoint)peelLayerStartPosition;
-(CGPoint)shineLayerStartPosition;
-(CGPoint)shadowLayerStartPosition;
-(CGPoint)initialDragStartPosition;
-(void)setInitialDragStartPosition:(CGPoint)arg1 ;
-(CGSize)rasterizedImageSize;
-(CALayer *)perspectiveLayer;
-(CKElasticFunction *)elasticFunctionPositionX;
-(void)setElasticFunctionPositionX:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionPositionY;
-(void)setElasticFunctionPositionY:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionRotation;
-(void)setElasticFunctionRotation:(CKElasticFunction *)arg1 ;
-(double)elasticRotationAngle;
-(void)setElasticRotationAngle:(double)arg1 ;
-(CKElasticFunction *)elasticFunctionScaleX;
-(void)setElasticFunctionScaleX:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionScaleY;
-(void)setElasticFunctionScaleY:(CKElasticFunction *)arg1 ;
-(double)elasticScaleX;
-(void)setElasticScaleX:(double)arg1 ;
-(double)elasticScaleY;
-(void)setElasticScaleY:(double)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
@end

