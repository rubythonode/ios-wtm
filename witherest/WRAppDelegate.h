//
//  WRAppDelegate.h
//  witherest
//
//  Created by 이종현 on 13. 7. 4..
//  Copyright (c) 2013년 witherest. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindowsAzureMobileServices/WindowsAzureMobileServices.h>
#import "WRMobileService.h"
#import <WindowsAzureMobileServices/MSClient.h>

@interface WRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) WRMobileService *mobileSvc;
-(void) changeRootViewController:(UIViewController *)controller;
@end
