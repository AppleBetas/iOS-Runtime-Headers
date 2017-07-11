/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption {

	BOOL _usesDefaultPhoto;

}

@property (assign,nonatomic) BOOL usesDefaultPhoto;              //@synthesize usesDefaultPhoto=_usesDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionUsingDefaultPhoto:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(BOOL)usesDefaultPhoto;
-(void)setUsesDefaultPhoto:(BOOL)arg1 ;
@end

