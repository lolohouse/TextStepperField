//
//  AppDelegate.h
//  TextStepperField
//
//  Created by manuel garcia on 23/01/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "stepperTestViewController.h"

@interface AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet stepperTestViewController *viewController;

@end
