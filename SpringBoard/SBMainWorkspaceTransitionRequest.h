/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {

	long long _source;
	/*^block*/id _transactionProvider;

}

@property (nonatomic,readonly) SBMainWorkspace * workspace; 
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id transactionProvider;                       //@synthesize transactionProvider=_transactionProvider - In the implementation block
-(void)setTransactionProvider:(id)arg1 ;
-(id)compactDescriptionBuilder;
-(BOOL)isMainWorkspaceTransitionRequest;
-(void)declineWithReason:(id)arg1 ;
-(id)transactionProvider;
-(id)initWithWorkspace:(id)arg1 display:(id)arg2 ;
-(void)setSource:(long long)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(long long)source;
-(id)succinctDescriptionBuilder;
@end

