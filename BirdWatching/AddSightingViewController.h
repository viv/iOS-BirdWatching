//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Matthew Vivian on 24/07/2013.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;

@property (strong, nonatomic) BirdSighting *birdSighting;

@end
