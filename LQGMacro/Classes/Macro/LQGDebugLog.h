//
//  LQGDebugLog.h
//  LQGMacro
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#ifndef LQGDebugLog_h
#define LQGDebugLog_h

#if DEBUG

#define LQG_DebugLog(format, ...)   NSLog((@"\n《=======================================================\n文件:%s" "\n行号:%d" "\n函数:%s"),   \
                                        [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String],                         \
                                        __LINE__,                                                                                           \
                                        [[[NSString stringWithUTF8String: __FUNCTION__] lastPathComponent] UTF8String]);                    \
                                    fprintf(stderr, "内容:\n%s\n=======================================================》\n",                \
                                        [[NSString stringWithFormat: format, ## __VA_ARGS__] UTF8String]);

#else

#define LQG_DebugLog(format, ...)   nil

#endif

#endif 
