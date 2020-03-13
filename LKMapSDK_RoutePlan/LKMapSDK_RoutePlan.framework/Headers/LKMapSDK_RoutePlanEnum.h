//
//  LKMapSDK_RoutePlanEnum.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/12/21.
//  Copyright © 2019 luokung. All rights reserved.
//

#ifndef LKMapSDK_RoutePlanEnum_h
#define LKMapSDK_RoutePlanEnum_h

/// 小汽车类型
typedef NS_ENUM(NSUInteger, LKCarType) {
    
    /// 传统燃油小汽车
    LKCarTypeGas = 0,
    
    /// 纯电动小汽车
    LKCarTypeBEV = 1,
    
    /// 插电混动小汽车
    LKCarTypeHybrid = 2,
};

/// 道路类型
typedef NS_ENUM(NSUInteger, LKRoadType) {
    
    /// 高速路
    LKRoadTypeHighway = 1,
    
    /// 国道
    LKRoadTypeNationalRoad,
    
    /// 快速路
    LKRoadTypeExpressWay,
    
    /// 省道
    LKRoadTypeProvincialRoad,
    
    /// 主要道路
    LKRoadTypeMajorRoad,
    
    /// 次要道路
    LKRoadTypeMinorRoad,
    
    /// 一般道路
    LKRoadTypeOrdinaryWay,
    
    /// 出入目的地道路
    LKRoadTypeAccessWay,
    
    /// 细道路
    LKRoadTypeLocalWay,
    
    /// 步行道路
    LKRoadTypeWalkWay,
    
    /// 县道
    LKRoadTypeCountyRoad,
    
    /// 乡道
    LKRoadTypeTownshipRoad,
    
    /// 村道
    LKRoadTypeVillageRoad,
};

#endif /* LKMapSDK_RoutePlanEnum_h */

