//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Matthew Vivian on 23/07/2013.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;

- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;

- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
