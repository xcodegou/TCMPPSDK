// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "TCMPPSDK",
    platforms: [
        .iOS(.v12),
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
        .package(url: "https://github.com/CoderMJLee/MJRefresh.git", from: "3.7.9"),
        .package(url: "https://github.com/ZipArchive/ZipArchive.git", .upToNextMinor(from: "2.4.3")),
        .package(url: "https://github.com/xcodegou/Brotli.git", branch: "master"),
        .package(url: "https://github.com/xcodegou/MQQComponents.git", branch: "main"),
        .package(url: "https://github.com/xcodegou/PromiseObjC.git", branch: "main"),
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
                .product(name: "MJRefresh", package: "MJRefresh"),
                .product(name: "ZipArchive", package: "ZipArchive"),
                .product(name: "Brotli", package: "Brotli"),
                .product(name: "MQQComponents", package: "MQQComponents"),
                .product(name: "PromiseObjC", package: "PromiseObjC"),
                .product(name: "SocketRocket", package: "SocketRocket"),
                .product(name: "Tars", package: "Tars"),
            ],
            resources: [.copy("TMFMiniAppSDK.bundle")]
        )
    ]
) 
