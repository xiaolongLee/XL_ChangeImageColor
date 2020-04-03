//
//  UIImage+ChangePictureColor.h
//  Swift5.1 imageWithTintColor
//
//  Created by 李小龙 on 2020/4/3.
//  Copyright © 2020 李小龙. All rights reserved.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ChangePictureColor)
/**
 *  修改图片颜色（如何使用：[[UIImage imageNamed:@"image"] imageWithTintColor:[UIColor orangeColor]]; ）
 *
 *  @param tintColor 指定颜色
 *
 *  @return 图片
 */
- (UIImage *)imageWithTintColor:(UIColor *)tintColor;
- (UIImage *)imageWithGradientTintColor:(UIColor *)tintColor;
@end

NS_ASSUME_NONNULL_END
