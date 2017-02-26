//
//  AVCardInfo.h
//  LZSwipeableViewDemo
//
//  Created by Qsyx on 17/02/21.
//  Copyright © 2017年 Qsyx All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AVCardInfo : NSObject
@property (nonatomic, assign) long long  feed_id;
@property (nonatomic, copy  ) NSString  *title;
@property (nonatomic, copy  ) NSString  *summary;
@property (nonatomic, copy  ) NSString  *webview_url;
@property (nonatomic, assign) NSInteger fav_count;
@property (nonatomic, assign) BOOL      is_fav;
@end
