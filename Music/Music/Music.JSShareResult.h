/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.JSObject.h>

@class NSURL, _TtC5Music9JSArtwork, NSString;

@interface Music.JSShareResult : Music.JSObject {

	 url;
	 artwork;
	 message;
	 subject;

}

@property (copy,nonatomic) NSURL * url; 
@property (retain,nonatomic) _TtC5Music9JSArtwork * artwork; 
@property (copy,nonatomic) NSString * message; 
@property (copy,nonatomic) NSString * subject; 
-(void)invokeMethod:(id)arg1 arguments:(id)arg2 ;
-(void)updateProperty:(id)arg1 value:(id)arg2 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(_TtC5Music9JSArtwork *)artwork;
-(void)setArtwork:(_TtC5Music9JSArtwork *)arg1 ;
@end

