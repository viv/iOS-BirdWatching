//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Matthew Vivian on 23/07/2013.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end
