//
//  AVSwipeCardCell.h
//  LZSwipeableViewDemo
//
//  Created by Qsyx on 17/02/21.
//  Copyright © 2017年 Qsyx All rights reserved.
//

#import "LZSwipeableView.h"
#import "AVCardInfo.h"
@interface AVSwipeCardCell : LZSwipeableViewCell
/** 卡片信息  */
@property (nonatomic, strong) AVCardInfo *cardInfo;
@end
