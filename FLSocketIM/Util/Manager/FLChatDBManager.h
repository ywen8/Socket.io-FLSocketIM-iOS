//
//  FLChatDBManager.h
//  FLSocketIM
//
//  Created by 冯里 on 2017/7/10.
//  Copyright © 2017年 冯里. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FLConversationModel;
@class FLMessageModel;
@interface FLChatDBManager : NSObject

+ (instancetype)shareManager;



/**
 向数据库添加会话

 @param conversation 会话模型
 */
- (void)addConversation:(FLConversationModel *)conversation;


/**
 查询所有的会话

 @return 查询到的会话数组
 */
- (NSArray<FLConversationModel *> *)queryAllConversations;



/**
 向数据库添加消息

 @param message 消息模型
 */
- (void)addMessage:(FLMessageModel *)message;



/**
 查询与某个用户的所有聊天信息

 @param userName 对方用户的名字
 @return 查询到的聊天记录
 */
- (NSArray <FLMessageModel *>*)queryMessagesWithUser:(NSString *)userName;


/**
 分页查询与某个用户的聊天信息

 @param userName 对方的用户名称
 @param limit 每页显示个数
 @param page 查询的页数
 @return 查询到的聊天记录
 */
- (NSArray <FLMessageModel *>*)queryMessagesWithUser:(NSString *)userName limit:(NSInteger)limit page:(NSInteger)page;


@end