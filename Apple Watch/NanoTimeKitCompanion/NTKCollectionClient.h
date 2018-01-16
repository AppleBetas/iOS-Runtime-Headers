/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:52 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKCollectionClient <NSObject>
@required
-(void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesByUUID:(id)arg3 seqId:(id)arg4 completion:(/*^block*/id)arg5;
-(void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;
-(void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
-(void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3;
-(void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)addFace:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
-(void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)flushCompleteForIdentifier:(id)arg1;

@end

