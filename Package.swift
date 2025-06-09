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
    targets: [
        .binaryTarget(
            name: "TCMPPSDK",
            path: "Sources/TCMPPSDK/TCMPPSDK.xcframework"
        )
    ]
) 