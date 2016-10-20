//
//  SelectInfoViewController.m
//  StringManage
//
//  Created by Zhi Kuiyu on 16/10/19.
//  Copyright © 2016年 Kiwik. All rights reserved.
//

#import "SelectInfoViewController.h"
#import "StringManage.h"

@interface SelectInfoViewController ()

@end

@implementation SelectInfoViewController

- (instancetype)init{
    SelectInfoViewController *vc = [self initWithNibName:@"SelectInfoViewController"
                                                  bundle:[StringManage sharedPlugin].bundle];
    return vc;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}

@end
