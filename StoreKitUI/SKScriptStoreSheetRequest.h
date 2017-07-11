/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class WebScriptObject, NSString;

@interface SKScriptStoreSheetRequest : SUScriptObject {

	long long _pageStyle;
	WebScriptObject* _productParameters;
	NSString* _productURL;

}

@property (assign) long long productPageStyle; 
@property (retain) WebScriptObject * productParameters; 
@property (retain) NSString * productURL; 
@property (readonly) long long productPageStyleAutomatic; 
@property (readonly) long long productPageStyleBanner; 
@property (readonly) long long productPageStylePad; 
@property (readonly) long long productPageStylePhone; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)attributeKeys;
-(long long)productPageStyle;
-(void)setProductPageStyle:(long long)arg1 ;
-(NSString *)productURL;
-(WebScriptObject *)productParameters;
-(void)setProductParameters:(WebScriptObject *)arg1 ;
-(void)setProductURL:(NSString *)arg1 ;
-(id)_safeValueForValue:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)newNativeStorePageRequest;
-(id)_className;
-(long long)productPageStyleAutomatic;
-(long long)productPageStyleBanner;
-(long long)productPageStylePad;
-(long long)productPageStylePhone;
@end

