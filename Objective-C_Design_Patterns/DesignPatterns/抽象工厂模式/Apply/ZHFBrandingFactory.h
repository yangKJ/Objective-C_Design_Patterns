//
//  ZHFBrandingFactory.h
//  Objective-C_Design_Patterns
//
//  Created by zhoufei on 2018/11/25.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  抽象名牌工厂

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHFBrandingFactory : NSObject
+ (instancetype)factory;
- (UIView *)brandingView;
- (UIButton *)brandingMainButton;
- (UIToolbar *)brandingToolbar;
@end

NS_ASSUME_NONNULL_END
