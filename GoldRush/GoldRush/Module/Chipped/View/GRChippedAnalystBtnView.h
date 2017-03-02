//
//  GRHeaderView.h
//  GoldRush
//
//  Created by Jack on 2016/12/27.
//  Copyright © 2016年 Jack. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GRChippedAnalystBtnView : UIView

@property (nonatomic, copy) void(^analstBlock)(UIButton *btn);       ///分析师
@property (nonatomic, copy) void(^documentaryBlock)(UIButton *btn);  ///全民跟单

///是否滑动到第二页
@property (nonatomic, assign) BOOL isSecond;

@end