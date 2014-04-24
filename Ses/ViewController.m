//
//  ViewController.m
//  Ses
//
//  Copyright (c) 2014 Smartface Inc. All rights reserved.
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


- (IBAction)clickStart:(id)sender {
    [[SESClient sharedSESClient] setLoggingEnabled:YES];
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

- (IBAction)clickRegister:(id)sender {
    [[SESClient sharedSESClient] registerDeviceToken:@"MY_TOKEN"];
}


- (IBAction)checkUpdate:(id)sender {
    [[SESClient sharedSESClient] checkUpdate];
}

-(void) getLastResponse:(NSMutableDictionary *) responseParams{
    NSLog(@"%@",responseParams);
}

@end

