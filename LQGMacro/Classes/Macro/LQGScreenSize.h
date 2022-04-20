//
//  LQGScreenSize.h
//  LQGMacro
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#ifndef LQGScreenSize_h
#define LQGScreenSize_h

#define LQG_SS_SCREEN_BOUNDS          [UIScreen mainScreen].bounds
#define LQG_SS_SCREEN_SIZE            [UIScreen mainScreen].bounds.size
#define LQG_SS_SCREEN_WIDTH           [UIScreen mainScreen].bounds.size.width
#define LQG_SS_SCREEN_HEIGHT          [UIScreen mainScreen].bounds.size.height
#define LQG_SS_SCREEN_SCALE           [UIScreen mainScreen].scale
#define LQG_SS_SCREEN_WIDTHSCALE      ([UIScreen mainScreen].bounds.size.width  / 375.f)
#define LQG_SS_SCREEN_HEIGHTSCALE     ([UIScreen mainScreen].bounds.size.height / 667.f)

#define LQG_SS_STATUSBAR_HEIGHT       (LQG_SI_isIphoneX ? 44.f : 20.f)
#define LQG_SS_BOTTOMSAFE_HEIGHT      (LQG_SI_isIphoneX ? 34.f : 0.f)
#define LQG_SS_NAVIGATIONBAR_HEIGHT   (LQG_SS_STATUSBAR_HEIGHT + 44.f)
#define LQG_SS_TABBAR_HEIGHT          (LQG_SS_BOTTOMSAFE_HEIGHT + 49.f)

#define LQG_SS_ONEPX                  (LQG_SS_SCREEN_SCALE > 0.f ? 1.f / LQG_SS_SCREEN_SCALE : 1.f)

#endif 
