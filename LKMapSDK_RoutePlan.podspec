#
# Be sure to run `pod lib lint LKMapSDK_RoutePlan.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LKMapSDK_RoutePlan'
  s.version          = '2.0.0'
  s.summary          = '箩筐地图iOS SDK（CocoaPods箩筐地图官方库），路线规划功能包'

  s.description      = <<-DESC
箩筐地图iOS SDK（CocoaPods箩筐地图官方库），路线规划功能包。提供驾车、货车路线规划等功能。
                       DESC

  s.homepage         = 'https://lbs.luokuang.com'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'LuokuangLBS' => 'haofp@luokung.com' }
  s.source           = { :git => 'https://github.com/LuokuangLBS/LKMapSDK_RoutePlan.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.frameworks = 'UIKit', 'CoreLocation'
  s.vendored_frameworks = 'LKMapSDK_RoutePlan/*.{framework}'
  s.dependency 'LKMapSDK_Base', s.version.to_s
end
