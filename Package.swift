// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "TCMPPSDK",
    platforms: [
        .iOS(.v12),
        .macOS(.v10_15)
    ],
    products: [
        .library(
            name: "TCMPPSDK",
            targets: ["TCMPPSDKWrapper"]
        ),
        .library(
            name: "TCMPPSDKWrapper",
            targets: ["TCMPPSDKWrapper"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/robbiehanson/CocoaAsyncSocket", from: "7.6.4"),
        .package(url: "https://github.com/CoderMJLee/MJRefresh.git", from: "3.7.9"),
        .package(url: "https://github.com/xcodegou/SSZipArchive.git", branch: "master"),
        .package(url: "https://github.com/xcodegou/Brotli.git", branch: "master"),
        .package(url: "https://github.com/xcodegou/MQQComponents.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/PromiseObjC.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/TMFShark.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/SocketRocket.git", branch: "master"),
        .package(url: "https://github.com/xcodegou/Tars.git", branch: "main"),
    ],
    targets: [
        .binaryTarget(
            name: "TCMPPSDK",
            path: "Sources/TCMPPSDK/TCMPPSDK.xcframework"
        ),
        .target(
            name: "TCMPPSDKWrapper",
            dependencies: [
                "TCMPPSDK",
                .product(name: "CocoaAsyncSocket", package: "CocoaAsyncSocket"),
                .product(name: "MJRefresh", package: "MJRefresh"),
                .product(name: "SSZipArchive", package: "SSZipArchive"),
                .product(name: "Brotli", package: "Brotli"),
                .product(name: "MQQComponents", package: "MQQComponents"),
                .product(name: "PromiseObjC", package: "PromiseObjC"),
                .product(name: "TMFShark", package: "TMFShark"),
                .product(name: "SocketRocket", package: "SocketRocket"),
                .product(name: "Tars", package: "Tars"),
            ]
        )
    ]
) 
