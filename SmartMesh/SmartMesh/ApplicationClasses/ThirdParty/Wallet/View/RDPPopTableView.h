//
//  RDPPopTableView.h
//  NAToken
//
//  Created by Rain on 2017/9/5.
//  Copyright © 2017年 SmartMesh Foundation All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RDPPopTableView : UIView

@property (nonatomic, copy) void(^selectedBlock)(Address *address);
@property (nonatomic, copy) void(^showBlockBlock)(BOOL show);

@property (nonatomic, assign) CGFloat startY;


+ (RDPPopTableView *)popView;

- (void)show;

- (void)hide;

@end
