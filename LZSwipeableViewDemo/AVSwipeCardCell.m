//
//  AVSwipeCardCell.m
//
//
//  Created by Qsyx on 17/02/21.
//  Copyright © 2017年 Qsyx All rights reserved.
//

#import "AVSwipeCardCell.h"

@interface AVSwipeCardCell ()
/**<#desc#>*/
@property (nonatomic, strong) UILabel *label;
@end

@implementation AVSwipeCardCell

- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier{
    if (self = [super initWithReuseIdentifier:reuseIdentifier]) {
        [self setupSubviews];
    }
    return  self;
}

- (void)setupSubviews{
    self.label = [UILabel new];
    self.label.numberOfLines = 0;
    self.userInteractionEnabled = NO;
    self.label.text = @"部分借用了其他人的源码。探探的效果";
    [self addSubview:self.label];
}


- (void)layoutSubviews{
    [super layoutSubviews];
    
    self.label.frame = self.bounds;
}

@end
