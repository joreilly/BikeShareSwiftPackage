# BikeShareSwiftPackage

Swift Package for https://github.com/joreilly/BikeShare


### Example code

```
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