//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Matthew Vivian on 23/07/2013.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
