//
//  MainViewController.h
//  SplitViewExample
//
//  Created by Madson on 30/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    UIPopoverController *popoverController;
    UIToolbar *toolbar;
    UILabel *itemLabel;
}

@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) IBOutlet UILabel *itemLabel;

- (void)setDetailItem:(NSString *)item;

@end
