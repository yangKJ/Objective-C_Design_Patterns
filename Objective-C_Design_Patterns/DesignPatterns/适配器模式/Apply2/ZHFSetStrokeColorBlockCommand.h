//
//  ZHFSetStrokeColorBlockCommand.h
//  Objective-C_Design_Patterns
//
//  Created by zhoufei on 2018/12/5.
//  Copyright © 2018年 周飞. All rights reserved.
//

#import "ZHFCommand.h"
#import "ZHFRGBValuesProviderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZHFSetStrokeColorBlockCommand : ZHFCommand
{
    @private
    RGBValuesProviderBlock providerBlock_;
}
@property (nonatomic, copy)RGBValuesProviderBlock providerBlock;

@end

NS_ASSUME_NONNULL_END
