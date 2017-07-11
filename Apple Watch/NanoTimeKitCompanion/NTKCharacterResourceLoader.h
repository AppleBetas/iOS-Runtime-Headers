/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class EAGLContext, NSBundle, NSMutableDictionary, NSMutableArray;

@interface NTKCharacterResourceLoader : NSObject {

	EAGLContext* _context;
	NSBundle* _bundle;
	unsigned long long _clients;
	NUMemFile _commonBankLatn;
	NUMemFile _commonBankArab;
	NUMemFile _minnieBank;
	NUMemFile _mickeyBank;
	NTKCharacterPrograms _programs;
	NSMutableDictionary* _mapping;
	NSMutableArray* _array;
	NSMutableArray* _arrayByLocale[2];

}

@property (nonatomic,readonly) EAGLContext * context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
+(void)_deallocInstance;
-(id)init;
-(void)dealloc;
-(EAGLContext *)context;
-(void)prime;
-(void)localeChanged;
-(unsigned)programUniformLocation:(unsigned long long)arg1 uniform:(int)arg2 ;
-(id)textureWithName:(id)arg1 ;
-(id)textureWithName:(id)arg1 prefix:(id)arg2 ;
-(void)bindProgram:(unsigned long long)arg1 ;
-(void)bindTexture:(id)arg1 ;
-(void)_loadPrograms;
-(void)_loadTextures;
-(void)_asyncDeallocInstance;
-(NUMemFile)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(BOOL)arg3 ;
-(void)addClient;
-(void)removeClient;
@end

