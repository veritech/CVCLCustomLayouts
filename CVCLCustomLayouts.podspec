Pod::Spec.new do |s|
  s.name         = "CVCLCustomLayouts"
  s.version      = "0.0.2"
  s.summary      = "A collection of UICollectionViewLayout subclasses"
  s.description  = <<-DESC
		A collection of UICollectionViewLayout subclasses
                   DESC
  s.homepage     = "https://github.com/veritech/CVCLCustomLayouts"
  s.license      = 'MIT'
  s.authors      = { "Jonathan Dalrymple" => "jonathan@float-right.co.uk", "Tatsuhiro Sawa" => "sawat1203@gmail.com" }
  s.platform     = :ios, '6.0'
  s.source       = { :git => "https://github.com/veritech/CVCLCustomLayouts.git", :tag => "0.0.2" }
  s.source_files  = 'Classes', 'Classes/**/*.{h,m}'
  s.exclude_files = 'Classes/Exclude'
  s.framework  = 'QuartzCore'
  s.requires_arc = true
end
