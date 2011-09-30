//
//  SplitViewExampleAppDelegate.h
//  SplitViewExample
//
//  Created by Madson on 30/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MenuViewController;
@class DetailViewController;

@interface SplitViewExampleAppDelegate : NSObject <UIApplicationDelegate> {
    UISplitViewController *splitView;
    MenuViewController *menuView;
    DetailViewController *detailView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
