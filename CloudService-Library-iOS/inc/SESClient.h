//
//  SesClient.h
//  SesClient
//
//  Created by mehmet akyol on 4/11/13.
//  Copyright (c) 2013 Mobinex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sesHeaderFile.h"


@class SESClient;
@protocol checkUpdateDelegate <NSObject>
-(void) getLastResponse:(NSMutableDictionary *) param;
@end


@interface SESClient : NSObject {
    id <checkUpdateDelegate> delegate;
    bool isStartedAlready;
}

@property (nonatomic, assign) id <checkUpdateDelegate> delegate;
@property (nonatomic, assign) bool isStartedAlready;

-(id) initWithDelegate : (id<checkUpdateDelegate>)delegt;

-(void) endSession;

-(void) pauseSession;

-(void) startSession :(NSString*) sesKey url:(NSString*) sesUrl;

-(void) recordEvent:(NSString*) eventName :(NSString*) customParams;

-(void) recordCustomer:(NSString*)name :(NSString*)surname : (NSString*)phone : (NSString*)mail :(NSString*)customer :(NSString*) customParams;

-(void) checkUpdate;

-(void) setLoggingEnabled : (bool) set;

-(bool) getLoggingEnabled;

+ (id) sharedSESClient;

-(int) getLastUpdateState;


@end