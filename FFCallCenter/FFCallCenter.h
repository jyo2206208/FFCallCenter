//
//  DYCallCenter.h
//  DYCallCenter_Example
//
//  Created by farfetch on 2017/12/4.
//  Copyright © 2017年 jyo2206208. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFCallCenter : NSObject

+ (instancetype)sharedInstance;

- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
