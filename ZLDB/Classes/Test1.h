//
//  Test1.h
//  ZLDB
//
//  Created by Apple on 2017/8/23.
//  Copyright © 2017年 zhilong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "pop/POP.h"

@interface Test1 : NSObject

@property(strong,nonatomic) POPAnimator *pop;

- (void)test:(NSString *)name;

@end
