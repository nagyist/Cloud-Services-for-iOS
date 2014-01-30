//
//  AppDelegate.h
//  Ses
//
//  Created by Smartface on 01.14.2014.
//  Copyright (c) 2014 Smartface. All rights reserved.
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