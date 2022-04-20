//
//  LQGSystemInfo.h
//  LQGMacro
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#ifndef LQGSystemInfo_h
#define LQGSystemInfo_h

#define LQG_SI_iOS8Later    @available(iOS 8.0, *)
#define LQG_SI_iOS9Later    @available(iOS 9.0, *)
#define LQG_SI_iOS10Later   @available(iOS 10.0, *)
#define LQG_SI_iOS11Later   @available(iOS 11.0, *)
#define LQG_SI_iOS12Later   @available(iOS 12.0, *)
#define LQG_SI_iOS13Later   @available(iOS 13.0, *)

#define LQG_SI_isIphoneX    ({                                                                                                          \
                                BOOL isPhoneX = NO;                                                                                     \
                                if (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPhone) {                           \
                                    if (LQG_SI_iOS11Later) {                                                                            \
                                        if ([[[UIApplication sharedApplication] delegate] window].safeAreaInsets.bottom > 0.f) {        \
                                            isPhoneX = YES;                                                                             \
                                        }                                                                                               \
                                    }                                                                                                   \
                                }                                                                                                       \
                                isPhoneX;                                                                                               \
                            })

#define LQG_SI_isDark       ({                                                                                                          \
                                BOOL iDark = NO;                                                                                        \
                                if (LQG_SI_iOS13Later) {                                                                                \
                                    iDark = UITraitCollection.currentTraitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;    \
                                }                                                                                                       \
                                iDark;                                                                                                  \
                            })

#endif
