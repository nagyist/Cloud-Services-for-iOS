//
//  ViewController.h
//  Ses
//
//  Created by Smartface on 01.14.2014.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *API_KEY = @"qUjjupLQU0SrcqHh";
NSString *SES_URL = @"http://analytics.smartface.io/api/AnalyticsData/";

@interface ViewController : UIViewController

- (IBAction)recordCustomer:(id)sender;
- (IBAction)recordEvent:(id)sender;

- (IBAction)checkUpdate:(id)sender;
- (IBAction)clickStart:(id)sender;

- (IBAction)clickStop:(id)sender;
- (IBAction)clickPause:(id)sender;

@end
