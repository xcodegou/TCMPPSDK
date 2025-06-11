// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "TCMPPSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "TCMPPSDK",
            targets: ["TCMPPSDK"]),
    ],
    dependencies: [
        // 添加依赖库，例如：
        // .package(url: "https://github.com/Alamofire/Alamofire.git", from: "5.0.0"),
        // .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0"),
    ],
    targets: [
        .binaryTarget(
            name: "TCMPPSDK",
            path: "Sources/TCMPPSDK/TCMPPSDK.xcframework"
        )
    ]
) 