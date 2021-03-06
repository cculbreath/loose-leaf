//
//  MMLoadImageCache.h
//  LooseLeaf
//
//  Created by Adam Wulf on 10/9/13.
//  Copyright (c) 2013 Milestone Made, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMDecompressImagePromise.h"


@interface MMLoadImageCache : NSObject

+ (MMLoadImageCache*)sharedInstance;

- (UIImage*)imageAtPath:(NSString*)path;

- (void)clearCacheForPath:(NSString*)path;

- (void)updateCacheForPath:(NSString*)path toImage:(UIImage*)image;

- (BOOL)containsPathInCache:(NSString*)path;

- (NSInteger)numberOfItemsHeldInCache;

- (int)memoryOfLoadedImages;

@end
