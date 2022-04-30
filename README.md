# BikeShareSwiftPackage

Swift Package for https://github.com/joreilly/BikeShare.  Note you can get full list of bike networks from https://api.citybik.es/v2/networks.


### Example SwiftUI code

```swift
import SwiftUI
import BikeShareKit

struct ContentView: View {
    let repository = CityBikesRepository()
    @State var stationList = [Station]()
    
    var body: some View {
        List(stationList, id: \.id) { station in
            Text("\(station.name) - \(station.freeBikes())")
        }
        .onAppear {
            repository.fetchBikeShareInfo(network: "oslo-bysykkel") { data, error in
                if let stationList = data {
                    self.stationList = stationList
                }
            }
        }
    }
}
```

Note that it's also necessary to initialise Koin (like following for example)

```swift
import SwiftUI
import BikeShareKit

@main
struct YourApp: App {
    init() {
        KoinKt.doInitKoin()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
```
