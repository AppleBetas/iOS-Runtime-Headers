/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationViewControllerDelegate <NSObject>
@optional
-(id)materialSettingsForNotificationViewController:(id)arg1;
-(long long)notificationViewControllerDateFormatStyle:(id)arg1;
-(BOOL)notificationViewControllerShouldPan:(id)arg1;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
-(BOOL)notificationViewControllerShouldBlurShortLook:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(/*^block*/id)arg2;
-(BOOL)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
-(BOOL)shouldAddHintTextForNotificationViewController:(id)arg1;
-(id)notificationViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
-(void)longLookWillPresentForNotificationViewController:(id)arg1;
-(void)notificationViewController:(id)arg1 didPresentLongLook:(BOOL)arg2;
-(void)longLookWillDismissForNotificationViewController:(id)arg1;
-(void)notificationViewController:(id)arg1 didDismissLongLook:(BOOL)arg2;
-(void)notificationViewController:(id)arg1 didDismissShortLook:(BOOL)arg2;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg1;
-(CGRect*)presentationFrameForNotificationViewController:(id)arg1;
-(CGRect*)notificationViewController:(id)arg1 convertRect:(CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
-(void)notificationViewController:(id)arg1 didCommitToShortLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3;
-(void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3;
-(id)customBackgroundViewForNotificationViewController:(id)arg1;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
-(BOOL)shouldLoadAudioAccessoryViewForNotificationViewController:(id)arg1;
-(void)notificationViewControllerIsReadyToBePresented:(id)arg1;

@required
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;

@end

