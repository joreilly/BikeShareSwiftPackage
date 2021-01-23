// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BikeShare",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "BikeShare",
            targets: ["BikeShare"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "BikeShare",
            path: "./BikeShare.xcframework"
        ),
    ]
)
