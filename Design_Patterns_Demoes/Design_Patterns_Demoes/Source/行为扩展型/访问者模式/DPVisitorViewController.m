//
//  DPVisitorViewController.m
//  Design_Patterns_Demoes
//
//  Created by 周飞 on 2019/7/10.
//  Copyright © 2019年 zhf. All rights reserved.
//
//  客户端想通过一个简单的访问方式（访问者提供的简单接口），来间接访问子系统的复杂接口操作

#import "DPVisitorViewController.h"
#import "DPConcreteElementA.h"
#import "DPConcreteVisitorA.h"

@interface DPVisitorViewController ()

@end

@implementation DPVisitorViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    DPConcreteElementA *elementA = [DPConcreteElementA new];
    DPConcreteVisitorA *visitorA = [DPConcreteVisitorA new];
    
    [elementA acceptElement:visitorA];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
