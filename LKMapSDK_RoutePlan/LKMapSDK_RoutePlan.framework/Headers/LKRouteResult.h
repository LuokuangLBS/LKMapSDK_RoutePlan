//
//  LKRouteResult.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <LKMapSDK_Base/LKLocation.h>
#import "LKMapSDK_RoutePlanEnum.h"
#import "LKMapSDK_RoutePlanConst.h"

@class LKRouteWaypoint;
@class LKRouteRoute;
@class LKRouteLeg;
@class LKRouteGeometry;
@class LKRouteStep;
@class LKRouteIntersection;
@class LKRouteManeuver;
@class LKRouteLane;

/// 路线规划响应结果
@interface LKRouteResult : NSObject

/// 途经点
@property (nonatomic, copy) NSArray <LKRouteWaypoint *> *waypoints;

/// 路线结果
@property (nonatomic, copy) NSArray <LKRouteRoute *> *routes;
@end

/// 路线规划途经点类
@interface LKRouteWaypoint : NSObject

/// 路线的行驶距离，单位：米
@property (nonatomic, assign) CGFloat distance;

/// 途径点地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

/// 途径点所在路线名称
@property (nonatomic, copy) NSString *name;
@end

/// 路线规划路线类
@interface LKRouteRoute : NSObject

/// 路线总长度，单位：米
@property (nonatomic, assign) CGFloat distance;

/// 预计行驶时间，单位：秒
@property (nonatomic, assign) CGFloat duration;

/// 路段几何数据
@property (nonatomic, strong) LKRouteGeometry *geometry;

/// 途经点之间的路段描述
@property (nonatomic, copy) NSArray <LKRouteLeg *> *legs;
@end

/// 路线规划途径路段信息类
@interface LKRouteLeg : NSObject

/// 经点之间的路段长度，单位：米
@property (nonatomic, assign) CGFloat distance;

/// 预计行驶时间，单位：秒
@property (nonatomic, assign) CGFloat duration;

/// 所经描述
@property (nonatomic, copy) NSString *summary;

/// 道路名称
@property (nonatomic, copy) NSString *name;

/// 描述逐向导航
@property (nonatomic, copy) NSArray <LKRouteStep *> *steps;
@end

/// 路线规划地理信息类
@interface LKRouteGeometry : NSObject

/// 路段地理坐标数组
@property (nonatomic, copy) NSArray <LKLocation *> *coordinates;

/// 路线类型
@property (nonatomic, assign) LKRoadType roadType;
@end

/// 路线规划路段信息类
@interface LKRouteStep : NSObject

/// 路口行驶指示信息
@property (nonatomic, copy) NSArray <LKRouteIntersection *> *intersections;

/// 行驶道路路侧指示，即车辆行驶在道路的左侧或右侧
@property (nonatomic, copy) LKDrivingSideType drivingSide;

/// 该步骤道路几何信息
@property (nonatomic, strong) LKRouteGeometry *geometry;

/// 该步骤预计耗时，单位：秒
@property (nonatomic, assign) CGFloat duration;

/// 该步骤行驶距离，单位：米
@property (nonatomic, assign) CGFloat distance;

/// 该步骤路段名称
@property (nonatomic, copy) NSString *name;

/// 该步骤的操作信息
@property (nonatomic, strong) LKRouteManeuver *maneuver;

/// 出去的角度
@property (nonatomic, assign) NSInteger bearingAfter;

/// 进入的角度
@property (nonatomic, assign) NSInteger bearingBefore;

/// 操作类别，与modifier结合使用
@property (nonatomic, copy) LKManeuverType maneuverType;

/// 引导信息地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

/// 驾驶操作的方向变化
@property (nonatomic, copy) LKModifierType modifier;

@end

/// 路线规划方位信息类
@interface LKRouteIntersection : NSObject

/// 方位角度数组。在路口处可用，展示了路口处所有可通行的道路。取值0到359 ，0真北方向
@property (nonatomic, copy) NSArray *bearings;

/// 路口周围道路可否行驶标记数组。元素个数与bearings对应，取值YES或NO，YES是，NO否
@property (nonatomic, copy) NSArray *entries;

/// bearings和entries数组的索引号。用于选取转向前的道路
@property (nonatomic, assign) NSInteger turningBeforeIndex;

/// bearings和entries数组的索引号。用于选取转向后的道路
@property (nonatomic, assign) NSInteger turningAfterIndex;

/// 当前step所在路段车道信息。如直行车道、右转车道以及该车道是否可行驶，详细参数请参见@link LKRouteLane
@property (nonatomic, copy) NSArray <LKRouteLane *> *lanes;

/// 道路限制情况
@property (nonatomic, copy) NSArray <NSString *> *routeClasses;

/// 路口地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;
@end

/// 路线规划驾驶信息类
@interface LKRouteManeuver : NSObject

/// 驶入道路角度。取值0到359，0真北方向
@property (nonatomic, assign) NSInteger bearingAfter;

/// 驶离道路角度。取值0到359，0真北方向
@property (nonatomic, assign) NSInteger bearingBefore;

/// 驾驶行为类型。与modifier字段结合使用
@property (nonatomic, copy) LKManeuverType maneuverType;

/// 引导信息地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;

/// 驾驶操作的方向变化
@property (nonatomic, copy) LKModifierType modifier;
@end

/// 路线规划车道信息类
@interface LKRouteLane : NSObject

/// 车道类型
@property (nonatomic, copy) NSArray <LKLaneIndicationType> *indications;

/// 车道是否可行驶。YES是，NO否
@property (nonatomic, assign) BOOL valid;
@end
