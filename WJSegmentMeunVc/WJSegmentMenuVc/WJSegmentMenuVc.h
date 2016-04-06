//
//  WJSegmentMenuVc.h
//  WJSegmentMeunVc
//
//  Created by 吴计强 on 16/4/5.
//  Copyright © 2016年 com.firsttruck. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    WJSegmentMenuVcSlideTypeCaver = 0,
    WJSegmentMenuVcSlideTypeSlide = 1,
} WJSegmentMenuVcSlideType;

@interface WJSegmentMenuVc : UIView

/** 字体大小 */
@property (nonatomic,strong)UIFont     *titleFont;

/** 没选择时标题颜色 */
@property (nonatomic,strong)UIColor    *unlSelectedColor;

/** 选择时标题颜色 */
@property (nonatomic,strong)UIColor    *selectedColor;

/** 滑块的颜色 */
@property (nonatomic,strong)UIColor    *SlideColor;

/** 是否提前加载下一个view */
@property (nonatomic,assign)BOOL       advanceLoadNextVc;

/** 滑块的样式 */
@property (nonatomic,assign)WJSegmentMenuVcSlideType MenuVcSlideType;

/** 控制中button的tag赋值(防止与其他tag有冲突) */
@property (nonatomic,assign)NSInteger  MenuButtontag;

/** 导入数据 */
- (void)addSubVc:(NSArray *)vc subTitles:(NSArray *)titles;

@end
