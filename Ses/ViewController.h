//
//  ViewController.h
//  Ses
//
//  Copyright (c) 2014 Smartface Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *API_KEY = @"YOUR_API_KEY";
NSString *SES_URL = @"http://analytics.smartface.io/api/AnalyticsData/";

@interface ViewController : UIViewController

- (IBAction)recordCustomer:(id)sender;
- (IBAction)recordEvent:(id)sender;

- (IBAction)checkUpdate:(id)sender;
- (IBAction)clickStart:(id)sender;

- (IBAction)clickStop:(id)sender;
- (IBAction)clickPause:(id)sender;

@end
