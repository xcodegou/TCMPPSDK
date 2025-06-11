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
        .package(url: "https://github.com/robbiehanson/CocoaAsyncSocket", from: "7.6.4"),
        .package(url: "https://github.com/CoderMJLee/MJRefresh.git", from: "3.7.9"),
        .package(url: "https://github.com/ZipArchive/ZipArchive.git", from: "2.6.0"),
        .package(url: "https://github.com/xcodegou/Brotli.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/MQQComponents.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/PromiseObjC.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/TMFShark.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/SocketRocket.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/Tars.git", branch: "main"),
    ],
    targets: [
        .binaryTarget(
            name: "TCMPPSDK",
            path: "Sources/TCMPPSDK/TCMPPSDK.xcframework"
        )
    ]
) 
