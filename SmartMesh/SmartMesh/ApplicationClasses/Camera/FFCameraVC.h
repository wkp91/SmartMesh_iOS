//
//  FFCameraVC.h
//  SmartMesh
//
//  Created by LingTuan on 17/10/11.
//  Copyright © 2017年 SmartMesh Foundation All rights reserved.
//

#import "DDYBaseViewController.h"

@interface FFCameraVC : DDYBaseViewController

@property (nonatomic, copy) void (^takePhotoBlock)(UIImage *image, UIViewController *vc);

@end
