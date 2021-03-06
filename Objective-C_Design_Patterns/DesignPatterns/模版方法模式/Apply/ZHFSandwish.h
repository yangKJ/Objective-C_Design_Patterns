//
//  ZHFSandwish.h
//  Objective-C_Design_Patterns
//
//  Created by zhoufei on 2018/12/24.
//  Copyright © 2018年 周飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHFSandwish : NSObject
- (void)make;
- (void)prepareBread;
- (void)putBreadOnPlate;
- (void)addMeat;
- (void)addCondiments;
//添加钩子方法，供子类需要时实现
- (void)extraStep;
- (void)serve;
@end

NS_ASSUME_NONNULL_END
