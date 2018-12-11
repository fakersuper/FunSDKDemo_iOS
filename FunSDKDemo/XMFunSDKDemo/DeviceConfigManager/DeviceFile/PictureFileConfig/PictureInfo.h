//
//  PictureInfo.h
//  FunSDKDemo
//
//  Created by XM on 2018/11/16.
//  Copyright © 2018年 XM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RecordInfo.h"

@interface PictureInfo : NSObject

@property (nonatomic,assign) NSInteger channelNo;
@property (nonatomic,assign) NSInteger fileType;
@property (nonatomic,retain) NSString  *fileName;
@property (nonatomic,assign) long      fileSize;
@property (nonatomic,assign) XM_SYSTEM_TIME   timeBegin;
@property (nonatomic,assign) XM_SYSTEM_TIME   timeEnd;
@end
