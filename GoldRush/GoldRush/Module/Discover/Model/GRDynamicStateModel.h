//
//  GRDynamicStateModel.h
//  GoldRush
//
//  Created by Jack on 2017/1/14.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GRReplyCommentModel;

@interface GRDynamicStateModel : NSObject

///头像
@property (nonatomic, copy) NSString *iconName;
///名字
@property (nonatomic, copy) NSString *name;
///时间
@property (nonatomic, copy) NSString * time;
///手机型号
@property (nonatomic, copy) NSString *phone;
///内容详情
@property (nonatomic, copy) NSString *msgContent;
///照片数组
@property (nonatomic, strong) NSArray *picNamesArray;
///是否点赞
@property (nonatomic, assign, getter = isLiked) BOOL liked;

///点赞数
@property (nonatomic, assign) NSInteger likeCount;
///评论数
@property (nonatomic, assign) NSInteger commentCount;

///评论数组
@property (nonatomic, strong) NSArray <GRReplyCommentModel *>*commentModels;

@end
