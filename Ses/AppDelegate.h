//
//  AppDelegate.h
//  Ses
//
//  Copyright (c) 2014 Smartface Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end


/*

 copy resources
 import CoreTelephony.framework and System.Configuration.framework
 import "SesAnalytics.h"
 
 didFinishLaunchingWithOptions:
 [SesAnalytics Start:@"YOUR_API_KEY" url:@"http://analitics.smartface.biz/api/AnalyticsData/"];
 


*/