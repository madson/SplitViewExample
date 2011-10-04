//
//  SplitViewExampleAppDelegate.m
//  SplitViewExample
//
//  Created by Madson on 30/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "SplitViewExampleAppDelegate.h"
#import "MenuViewController.h"
#import "DetailViewController.h"

@implementation SplitViewExampleAppDelegate

@synthesize window = _window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    MenuViewController *menu        = [MenuViewController new];
    UINavigationController *nav     = [[UINavigationController alloc] initWithRootViewController:menu];
    
    DetailViewController *detail    = [DetailViewController new];
    menu.detailController           = detail;
    
    UISplitViewController *split    = [UISplitViewController new];
    split.viewControllers           = [NSArray arrayWithObjects:nav, detail, nil];
    split.delegate                  = detail;
    [detail release];
    
    [self.window setRootViewController:split];
    [self.window makeKeyAndVisible];

    [menu release];
    [nav release];
    [split release];
    
    return YES;
}

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

@end
