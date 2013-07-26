//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Matthew Vivian on 23/07/2013.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
