//
//  LKTruckRouteRequest.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/11/29.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import "LKDrivingRouteRequest.h"

/// 货车路线规划请求报文类
@interface LKTruckRouteRequest : LKRouteRequest

#pragma mark 必填参数

/// @warning 请设置父类中的必填参数

#pragma mark 选填参数

/// 货车宽度。单位：米
@property (nonatomic, assign) CGFloat width;

/// 货车高度。单位：米
@property (nonatomic, assign) CGFloat height;

/// 货车长度。单位：米
@property (nonatomic, assign) CGFloat length;

/// 货车核定重量，即可装载货物的最大重量。会严格按照填写数字进行限行规避，请按照车辆真实信息合理填写。单位：吨。默认10吨
@property (nonatomic, assign) CGFloat weight;

/// 货车轴重。单位：吨
@property (nonatomic, assign) CGFloat axleweight;
@end
