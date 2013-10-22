# SESClient Library for iOS

Smartface Enterprise Server (SES) is not just an life cycle management tool for your mobile application. It is an assistant for your mobile app strategies.

SES is designed for your enterprise for multiple purposes of use. SES can be used by IT to manage applications; apps can be monitored by decision makers; contact center has its own support interface, all managed by Access Control Levels (ACL).

Everything in the SES architecture is expandable with Service Oriented Architecture. (SOA) Your enterprise can integrate with SES with the given API’s.

SESClient Library is a logging and analytics library works with Smartface Enterprise Server (SES).

## Usage


- Unzip sesclient-ios.zip, drag all files and drop on your project in Xcode. Check "Copy items into destination group's folder (if needed)"
- In your Project and Target settings, add "-all_load" parameter to "Other Linker Flags"
- Navigate to Build Phases > Link Binary with Libraries add CoreLocation.framework, SystemConfiguration.framework, CoreTelephony.framework and AdSupport.framework.
- Import necessary headers

```objc
#import "SESClient.h"
```

##### Starting Session
User activities are recorded in a session. A session shuld be started for tracking.
At the first start, user will be prompted to enable location services for your application.
```objc
[[SESClient sharedSESClient] startSession:@"YOUR_API_KEY" url:@"SES_URL"];
```

##### Ending Session 
Session can be ended to stop tracking.
```objc
[[SESClient sharedSESClient] endSession];
```

##### Pausing Session
startSession method will be called to resume a paused session.
```objc
[[SESClient sharedSESClient] pauseSession];
```

##### Recording Customer
Customer can be recorded with customer information. With customParams parameter, information about customer can be sent in JSON format.
```objc
[[SESClient sharedSESClient] recordCustomer:@"name" :@"surname" :@"phone_number" :@"email" :@"customer_id" :@"{\"key\":\"value\"}"];
```

##### Recording Event
Events can be recorded by defining an event direction for creating detailed path analyze.
```objc
[[SESClient sharedSESClient] recordEvent:@"event_direction" :@"{\"key\":\"value\"}"];
```

##### Checking Update
In your application, an update check mechanism can be used with SES.
At first checkUpdateDelegate will be set.
```objc
@interface ViewController () <checkUpdateDelegate>
```
getLastResponse method will be overriden.
```objc
-(void) getLastResponse:(NSMutableDictionary *) responseParams{
    NSLog(@"%@",responseParams);
}
```
checkUpdate method wil be called.
```objc
[[SESClient sharedSESClient] checkUpdate];
```

##### Logging
To see SESClient logs on XCode log window, logs should be enabled. Enabling logs before starting session is suggested.
```objc
if (![[SESClient sharedSESClient] getLoggingEnabled]){
    [[SESClient sharedSESClient] setLoggingEnabled:YES];
}

```
