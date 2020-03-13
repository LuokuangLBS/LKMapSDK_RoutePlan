//
//  LKDrivingRoute.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/11/28.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LKMapSDK_Base/LKTypes.h>
#import "LKDrivingRouteRequest.h"
#import "LKDrivingRouteResponse.h"
#import "LKTruckRouteRequest.h"
#import "LKTruckRouteResponse.h"

@protocol LKRouteManagerDelegate;

/// 路线规划类
@interface LKRouteManager : NSObject

/// 代理
@property (nonatomic, weak) id <LKRouteManagerDelegate> delegate;

/**
 * 创建路线规划实例
 *
 * @return 路线规划实例
 */
+ (instancetype)manager;

/**
 * 驾车路线规划请求
 *
 * @param request 请求报文
 */
- (void)drivingRequest:(LKDrivingRouteRequest *)request;

/**
 * 货车路线规划请求
 *
 * @param request 请求报文
 */
- (void)truckRequest:(LKTruckRouteRequest *)request;
@end

#pragma mark --
/// 路线规划协议
@protocol LKRouteManagerDelegate <NSObject>
@optional

/**
 * 驾车路线规划回调
 *
 * @param manager 路线规划实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)routeManager:(LKRouteManager *)manager
     drivingResponse:(LKDrivingRouteResponse *)response
           errorCode:(LKNetworkCode)code;

/**
 * 货车路线规划回调
 *
 * @param manager 路线规划实例
 * @param response 响应报文
 * @param code 状态码
 */
- (void)routeManager:(LKRouteManager *)manager
       truckResponse:(LKTruckRouteResponse *)response
           errorCode:(LKNetworkCode)code;

@end

