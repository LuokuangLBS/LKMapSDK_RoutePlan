//
//  LKMapSDK_RoutePlanConst.h
//  LKMapSDK_RoutePlan
//
//  Created by hao on 2019/12/23.
//  Copyright © 2019 luokung. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 行驶道路路侧指示，即车辆行驶在道路的左侧或右侧
typedef NSString *LKDrivingSideType NS_STRING_ENUM;

/// 行驶道路路侧指示，即车辆行驶在道路的右侧
FOUNDATION_EXPORT LKDrivingSideType const LKDrivingSideTypeRight;

/// 行驶道路路侧指示，即车辆行驶在道路的左侧
FOUNDATION_EXPORT LKDrivingSideType const LKDrivingSideTypeLeft;


/// 车道类型
typedef NSString *LKLaneIndicationType NS_STRING_ENUM;

/// 右转车道
FOUNDATION_EXPORT LKLaneIndicationType const LKLaneIndicationTypeRight;

/// 左转车道
FOUNDATION_EXPORT LKLaneIndicationType const LKLaneIndicationTypeLeft;

/// 直行车道
FOUNDATION_EXPORT LKLaneIndicationType const LKLaneIndicationTypeStraight;


/// 驾驶行为类型
typedef NSString *LKManeuverType NS_STRING_ENUM;

/// 转向操作
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeTurn;

/// 未发生转向，但道路名称改变，道路可能自身发生转向，遵循modifier字段类型
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeNewName;

/// 离开一个路段
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeDepart;

/// 进入一个路段
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeArrive;

/// 汇入一条街道 (如:从匝道进入高速公路，modifier指定了汇入的方向)
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeMerge;

/// 通过匝道进入高速公路 (按modifier字段提供的方向)
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeOnRamp;

/// 通过匝道驶出高速公路 (按modifier字段提供的方向)
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeOffRamp;

/// 根据modifier字段数据在分叉路口左转/右转
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeFork;

/// 道路在T型交叉路口终止，按modifier字段值转向
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeEndOfRoad;

/// 按modifier字段转向并保持在同一条路上
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeContinue;

/// 穿越环岛，如果规划的路线驶出环岛，将会有一个附加的属性，用来表示出口处的计数。modifier 字段值指定了进入环岛时的方向
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeRoundAbout;

/// 一个环形路
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeRotary;

/// 小型环岛处的转向应当按照普通的转向处理。modifier指示了转向。例如:在环岛处左转
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeRoundAboutTurn;

/// 并不是一个真正的转向，而是驾驶情况发生变化。例如:行驶模式或类别的改变。如果道路本身发生的转向，modifier字段值将会提示方向
FOUNDATION_EXPORT LKManeuverType const LKManeuverTypeNotification;


/// 转向类型
typedef NSString *LKModifierType NS_STRING_ENUM;

/// 反转方向，U 型弯
FOUNDATION_EXPORT LKModifierType const LKModifierTypeUTurn;

/// 向右急转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeSharpRight;

/// 普通的右转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeRight;

/// 轻微的右转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeSlightRight;

/// 向左急转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeSharpLeft;

/// 普通的左转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeLeft;

/// 轻微的左转
FOUNDATION_EXPORT LKModifierType const LKModifierTypeSlightLeft;

/// 直行，方向不变
FOUNDATION_EXPORT LKModifierType const LKModifierTypeStraight;


/// 路线规划策略类型
typedef NSString *LKRouteTacticsType NS_STRING_ENUM;

/// 最快路线
FOUNDATION_EXPORT LKRouteTacticsType const LKRouteTacticsTypeFastest;

/// 最短路线
FOUNDATION_EXPORT LKRouteTacticsType const LKRouteTacticsTypeShortest;

/// 高速优先路线
FOUNDATION_EXPORT LKRouteTacticsType const LKRouteTacticsTypeHighwayFirst;

/// 避免高速路线
FOUNDATION_EXPORT LKRouteTacticsType const LKRouteTacticsTypeHighwayAvoid;

/// 节油路线，仅对货车路线规划有效
FOUNDATION_EXPORT LKRouteTacticsType const LKRouteTacticsTypeFuelSaving;
