//
//  CTXUserActivityTrackingManager.h
//  CTXFramework
//
//  Created by Alberto De Bortoli on 29/01/2014.
//  Copyright (c) 2014 EF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTXUserActivityTrackerProtocol.h"

@interface CTXUserActivityTrackingManager : NSObject

- (void)setupWithConfiguration:(NSDictionary *)configuration;

- (void)registerTracker:(id<CTXUserActivityTrackerProtocol>)tracker;

@end
