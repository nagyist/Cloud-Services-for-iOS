//
//  ViewController.m
//  Ses
//
//  Created by Smartface on 01.14.2014.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#import "ViewController.h"
#import "SESClient.h"

@interface ViewController () <checkUpdateDelegate>

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [[SESClient sharedSESClient] setDelegate:self];
}

- (IBAction)logBtnClicked:(id)sender {
    [[SESClient sharedSESClient] setLoggingEnabled:YES];
}

- (IBAction)clickStart:(id)sender {
    [[SESClient sharedSESClient] startSession:API_KEY url:SES_URL];
}

- (IBAction)clickStop:(id)sender {
    [[SESClient sharedSESClient] endSession];
}

- (IBAction)clickPause:(id)sender {
    [[SESClient sharedSESClient] pauseSession];
}

- (IBAction)recordCustomer:(id)sender {
    [[SESClient sharedSESClient] recordCustomer:@"name" :@"surname" :@"905051234567" :@"email@example.com" :@"customerId" :@"{\"key\":\"customparam\"}"];
}

- (IBAction)recordEvent:(id)sender {
    [[SESClient sharedSESClient] recordEvent:@"myEvent" :@"\"key\":\"eventparam\"}"];
}

- (IBAction)checkUpdate:(id)sender {
    [[SESClient sharedSESClient] checkUpdate];
}

-(void) getLastResponse:(NSMutableDictionary *) responseParams{
    NSLog(@"%@",responseParams);
}

@end

