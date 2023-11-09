// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "BikeShareKit",
    platforms: [
        .iOS(.v14),
.macOS(.v12)
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
