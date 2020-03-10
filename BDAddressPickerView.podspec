#
# Be sure to run `pod lib lint BDAddressPickerView.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BDAddressPickerView'
  s.version          = '1.0.1'
  s.summary          = 'A short description of BDAddressPickerView.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "Usefull tool for objective-c develop.Help yourself in this post.And buy me a cup of coffee.Just kidding.Anyway Where is coffee shop?"

  s.homepage         = 'https://github.com/reference/BDAddressPickerView'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'reference' => 'scottban@126.com' }
  s.source           = { :git => 'https://github.com/reference/BDAddressPickerView.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.frameworks = 'UIKit', 'Foundation'
  s.dependency 'YYModel'
  s.public_header_files = 'BDAddressPickerView/Classes/BDAddressPickerView.h'
  s.source_files = 'BDAddressPickerView/Classes/*'
#  s.resource_bundles = {
#      'BDAddressPickerView' => ['BDAddressPickerView/Res/*.txt']
#  }
end
