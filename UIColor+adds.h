//
//  UIColor+adds.h
//  BuDeJie
//
//  Created by iOSzhb on 2017/2/22.
//  Copyright © 2017年 iOSzhb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (adds)

// 默认alpha位1
+ (UIColor *)colorWithHexString:(NSString *)color;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end
