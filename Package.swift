// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BikeShareKit",
    platforms: [
        .iOS(.v13),
.macOS(.v10_15)
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
