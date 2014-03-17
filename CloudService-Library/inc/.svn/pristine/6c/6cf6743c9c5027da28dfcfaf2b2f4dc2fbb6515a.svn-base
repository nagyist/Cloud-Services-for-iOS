//
//  sesHeaderFile.h
//  AnalyticIOSTest
//
//  Created by mehmet akyol on 10/10/13.
//  Copyright (c) 2013 Mobinex. All rights reserved.
//

#ifndef AnalyticIOSTest_sesHeaderFile_h
#define AnalyticIOSTest_sesHeaderFile_h


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>



bool isLogEnabled;
@interface SystemVariables : NSObject

@end


@interface LocationParam : NSObject <CLLocationManagerDelegate> {
    NSString* latitude;
    NSString* longitude;
    CLLocationManager *locationManager;
    CLLocation *currentLocation;
}

@property (nonatomic, retain) NSString *latitude;
@property (nonatomic, retain) NSString *longitude;
@property (nonatomic, retain) CLLocation *currentLocation;
@property (nonatomic, retain) CLLocationManager *locationManager;

@end



@interface EventQueue : NSObject {
    NSMutableArray* evQueue;
}

@property (nonatomic, assign) NSMutableArray* evQueue;
@property Boolean isStop;

@end



@interface MAWebUserAgent : NSObject <UIWebViewDelegate>  {
	NSString *userAgent;
	UIWebView *webView;
}
@property (nonatomic, retain) NSString *userAgent;
@property bool isReady;

@end



@interface AnalyticsFunctions : NSObject 


@end


@interface AnalyticsParam : NSObject

@property (nonatomic, retain) NSString* sharedKey;
@property (nonatomic, retain) NSString* sesUrl;

@property (nonatomic, retain) NSString* accessToken;
@property (nonatomic, retain) NSString* timeValue;
@property (nonatomic, retain) NSString* secretKey;
@property (nonatomic, retain) NSString* deviceId;
@property (nonatomic, retain) NSString* osName;
@property (nonatomic, retain) NSString* osVersion;
@property (nonatomic, retain) NSString* deviceBrand;
@property (nonatomic, retain) NSString* deviceModel;
@property (nonatomic, retain) NSString* deviceType;
@property (nonatomic, retain) NSString* deviceWidth;
@property (nonatomic, retain) NSString* deviceHeight;
@property (nonatomic, retain) NSString* resolutionWidth;
@property (nonatomic, retain) NSString* resolutionHeight;
@property (nonatomic, retain) NSString* appName;
@property (nonatomic, retain) NSString* appVersion;
@property (nonatomic, retain) NSString* latitude;
@property (nonatomic, retain) NSString* longitude;
@property (nonatomic, retain) NSString* msisdn;
@property (nonatomic, retain) NSString* networkType;
@property (nonatomic, retain) NSString* carrierInfo;
@property (nonatomic, retain) NSString* customerId;
@property (nonatomic, retain) NSString* sesUserId;
@property (nonatomic, retain) NSString* eventName;
@property (nonatomic, retain) NSString* ipAddress;
@property (nonatomic, retain) NSString* sdkVersion;
@property (nonatomic, retain) NSString* countryCode;
@property (nonatomic, retain) NSString* gsmLocation;
@property (nonatomic, retain) NSString* appLanguage;
@property (nonatomic, retain) NSString* deviceLanguage;
@property (nonatomic, retain) NSString* firstTimeLaunch;
@property (nonatomic, retain) NSString* jailBreaked;
@property (nonatomic, retain) NSString* packageName;
@property (nonatomic, retain) NSString* firmwareVersion;
@property (nonatomic, retain) NSString* vendorId;
@property (nonatomic, retain) NSString* advertisingId;
@property (nonatomic, retain) NSString* source;


@end

@interface AnalyticsEventParam : NSObject

@property (nonatomic, copy) NSString* accessToken;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* timeVaule;
@property (nonatomic, copy) NSString* eventName;
@property (nonatomic, copy) NSString* params;
@property (nonatomic, copy) NSString* sdkVersion;

@end

@interface AnalyticsLocationParam : NSObject

@property (nonatomic, copy) NSString* accessToken;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* latitude;
@property (nonatomic, copy) NSString* longitude;
@property (nonatomic, copy) NSString* sdkVersion;

@end


@interface AnalyticsErrorParam : NSObject

@property (nonatomic, copy) NSString* accessToken;
@property (nonatomic, copy) NSString* appName;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* errorMessage;
@property (nonatomic, copy) NSString* sdkVersion;

@end

@interface AnalyticsEndParam : NSObject

@property (nonatomic, copy) NSString* accessToken;
@property (nonatomic, copy) NSString* appName;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* timeValue;
@property (nonatomic, copy) NSString* sdkVersion;

@end


@interface CustomerParams : NSObject

@property (nonatomic, copy) NSString* accessToken;
@property (nonatomic, copy) NSString* appVersion;
@property (nonatomic, copy) NSString* osName;
@property (nonatomic, copy) NSString* osVersion;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* name;
@property (nonatomic, copy) NSString* surname;
@property (nonatomic, copy) NSString* email;
@property (nonatomic, copy) NSString* phone;
@property (nonatomic, copy) NSString* customerId;
@property (nonatomic, copy) NSString* timeValue;
@property (nonatomic, copy) NSString* customParams;
@property (nonatomic, copy) NSString* sdkVersion;

@end

@interface AnalyticsResult : NSObject

@property (nonatomic, copy) NSString* accessToken;

@end

@interface UpdateResponse : NSObject

@property int state;
@property (nonatomic, copy) NSString* status;
@property (nonatomic, copy) NSString* latestVersion;
@property (nonatomic, copy) NSString* downloadUrl;
@property (nonatomic, copy) NSString* isMandotary;

@end






#endif
