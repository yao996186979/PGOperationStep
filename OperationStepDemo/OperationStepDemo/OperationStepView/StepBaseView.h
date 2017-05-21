//
//  StepBaseView.h
//  OperationStep
//
//  Created by 姚东 on 17/5/18.
//  Copyright © 2017年 姚东. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StepTop.h"
#import "StepBottom.h"
/// 屏幕高度
#define V_H CGRectGetHeight([UIScreen mainScreen].bounds)
/// 屏幕宽度
#define V_W CGRectGetWidth([UIScreen mainScreen].bounds)
// 步骤高度 Title View Height
#define T_V_H  60
// 步骤按钮高度 Title Button Height
#define T_B_H  40
@protocol ActionDelegate <NSObject>


/**
  按钮点击事件

 @param isTop 区分上下
 @param topArr 上部分按钮合集
 @param bottomArr 下部分按钮合集
 @param tag 点击哪个
 @param page 当前页
 */
- (void)actionClickIsTop:(BOOL)isTop TopButton:(NSArray<StepTop*>*)topArr BottomButton:(NSArray<NSArray<StepBottomButton *>*>*)bottomArr Tag:(NSInteger)tag Page:(NSInteger)page backView:(UIScrollView*)backView;

@end
@interface StepBaseView : UIView



@property (nonatomic, assign) id<ActionDelegate>delegate;
// 注:请按步骤设置属性
// 重叠部分  StepButton的tipWidth/2
@property  (nonatomic, assign) float titleBtnWidth;
// 步骤标题
@property  (nonatomic, strong) NSArray * titleArr;
// 步骤页面
@property  (nonatomic, strong) NSMutableArray <UIView *>*viewArr;
// 底部操作名称
@property  (nonatomic, strong) NSArray <NSArray <NSString *> *>*bottomTitles;

// 上部分按钮
@property (nonatomic, strong)NSMutableArray <StepTop *>* topBtnArr;
// 下部分按钮
@property (nonatomic, strong)NSMutableArray <NSArray <StepBottomButton *>*>* bottomBtnArr;
///设置下部按钮全开
- (void)setAllBottomIsAble;
@end