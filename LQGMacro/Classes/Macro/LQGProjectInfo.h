//
//  LQGProjectInfo.h
//  LQGMacro
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#ifndef LQGProjectInfo_h
#define LQGProjectInfo_h

#define LQG_PI_NAME     [[NSBundle mainBundle].infoDictionary valueForKey:@"CFBundleDisplayName"]
#define LQG_PI_BUNDLEID [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"]
#define LQG_PI_VERSION  [[NSBundle mainBundle].infoDictionary objectForKey:@"CFBundleShortVersionString"]
#define LQG_PI_BUILD    [[NSBundle mainBundle].infoDictionary objectForKey:@"CFBundleVersion"]

#endif
