//
//  MenuViewController.h
//  SplitViewExample
//
//  Created by Madson on 30/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MenuViewController : UITableViewController {
    NSMutableArray *items;
    DetailViewController *detailController;
}

@property (nonatomic, retain) DetailViewController *detailController;

@end
