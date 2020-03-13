//
//  LKRouteResponse.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKResponse.h>
#import "LKRouteResult.h"

/// 路线规划响应报文基类
@interface LKRouteResponse : LKResponse

/// 返回结果
@property (nonatomic, strong) LKRouteResult *result;
@end
