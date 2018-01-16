/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIImage.h>

@class UIImage;

@interface IMImage : UIImage {

	double _capWidth;
	UIImage* _left;
	UIImage* _right;
	UIImage* _middle;

}
+(id)imageNamed:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 capWidth:(double)arg2 scale:(double)arg3 orientation:(long long)arg4 ;
-(void)dealloc;
-(void)drawInRect:(CGRect)arg1 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(void)drawInRect:(CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3 ;
-(id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2 ;
@end

