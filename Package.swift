// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BikeShareKit",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "BikeShareKit",
            targets: ["BikeShareKit"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "BikeShareKit",
            path: "./BikeShareKit.xcframework"
        ),
    ]
)
