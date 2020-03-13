//
//  LKRouteRequest.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/11/30.
//  Copyright © 2019 箩筐. All rights reserved.
//

#import <LKMapSDK_Base/LKLocation.h>
#import <LKMapSDK_Base/LKRequest.h>
#import "LKMapSDK_RoutePlanEnum.h"
#import "LKMapSDK_RoutePlanConst.h"

/// 路线规划请求报文基类
@interface LKRouteRequest : LKRequest

#pragma mark 必填参数

/// 起点地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D origin;

/// 终点地理坐标
@property (nonatomic, assign) CLLocationCoordinate2D destination;

#pragma mark 选填参数

/// 途径地理坐标数组，目前支持10个以内的有序途径点
@property (nonatomic, copy) NSArray <LKLocation *> *waypoints;

/// 是否返回多条路线。默认NO
@property (nonatomic, assign) BOOL alternatives;

/// 车辆类型。由于部分城市对燃油车和电动车限行规则有差异，该字段用于结合 plate_number 车牌号来规避限行。例如:纯电动汽车在北京无尾号限行，而燃油车需遵守尾号限行，默认LKCarTypeGas
@property (nonatomic, assign) LKCarType carType;

/// 车牌号。如京A00000用于规避限行路段，不填则不作规避，1、若有规避限行区域的可选路线，则返回规避后的路线。2、若无规避限行的可选路线（如:起终点在限行区域内，或所有符合偏好的路线都无法规避限行区域），则返回限行路线中最优路线，并在响应报文的intersections字段中返回限行路段
@property (nonatomic, copy) NSString *plateNumber;

/// 是否返回规划路径中每一条线路段引导步骤。默认YES
@property (nonatomic, assign) BOOL steps;

/// 策略类型。默认LKRouteTacticsTypeFastest
@property (nonatomic, copy) LKRouteTacticsType tacticsType;

/// 是否根据交通信息计算通行时间，对应响应报文traffictraveltime。默认YES
@property (nonatomic, assign) BOOL trafficDuration;

/// 起点车头方向。取值范围0到359，0真北方向，默认0
@property (nonatomic, assign) CGFloat bearing;
@end
