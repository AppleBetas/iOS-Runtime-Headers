/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:19 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject

@property (nonatomic,retain) NSArray * powerLevels; 
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(id)_cachedPowerLevelsForKey:(id)arg1 ;
+(void)_cachePowerLevels:(id)arg1 forKey:(id)arg2 ;
+(id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4 ;
+(Class)__ck_attachmentItemClass;
-(id)previewItemTitle;
-(int)mediaType;
-(NSArray *)powerLevels;
-(void)setPowerLevels:(NSArray *)arg1 ;
-(id)waveformForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)canExport;
-(void)export:(id)arg1 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(BOOL)shouldBeQuickLooked;
-(BOOL)isLikeAudioMessage;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 ;
-(id)composeWaveformForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)previewFilenameExtension;
@end

