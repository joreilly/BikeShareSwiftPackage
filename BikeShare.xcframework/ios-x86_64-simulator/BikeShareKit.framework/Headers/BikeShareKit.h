#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BSKNetworkResult, BSKNetworkListResult, BSKLocation, BSKStation, BSKNetwork, BSKKotlinUnit, BSKKotlinArray<T>, BSKNetworkList, BSKKotlinThrowable, BSKKotlinException, BSKKotlinRuntimeException, BSKKotlinIllegalStateException, BSKKodein_db_apiKey<__covariant T>, BSKKodein_db_apiKeyAndSize<M>, BSKKotlinx_serialization_coreSerializersModule, BSKKotlinx_serialization_coreSerialKind, BSKKotlinNothing, BSKKodein_memoryMaybeThrowable, BSKKotlinByteArray, BSKKotlinByteIterator;

@protocol BSKKotlinx_serialization_coreKSerializer, BSKKotlinx_coroutines_coreFlow, BSKKotlinx_coroutines_coreStateFlow, BSKKodein_db_apiMetadata, BSKKodein_db_apiModelDB, BSKKodein_db_apiOptionsWrite, BSKKodein_db_apiHasMetadata, BSKKotlinx_serialization_coreEncoder, BSKKotlinx_serialization_coreSerialDescriptor, BSKKotlinx_serialization_coreSerializationStrategy, BSKKotlinx_serialization_coreDecoder, BSKKotlinx_serialization_coreDeserializationStrategy, BSKKotlinx_coroutines_coreFlowCollector, BSKKotlinx_coroutines_coreSharedFlow, BSKKodein_db_apiModelBatch, BSKKodein_db_apiModelSnapshot, BSKKodein_db_apiOptionsRead, BSKKodein_memoryCloseable, BSKKodein_db_apiDBListener, BSKKotlinKClass, BSKKodein_db_apiKeyMaker, BSKKodein_db_apiValue, BSKKodein_db_apiValueMaker, BSKKodein_db_apiModelWrite, BSKKodein_db_apiModelCursor, BSKKodein_db_apiSized, BSKKodein_db_apiModelRead, BSKKodein_db_apiOptions, BSKKotlinIterator, BSKKotlinx_serialization_coreCompositeEncoder, BSKKotlinAnnotation, BSKKotlinx_serialization_coreCompositeDecoder, BSKKodein_memoryReadMemory, BSKKotlinKDeclarationContainer, BSKKotlinKAnnotatedElement, BSKKotlinKClassifier, BSKKodein_memoryWriteable, BSKKodein_db_apiBody, BSKKodein_db_apiBaseCursor, BSKKotlinx_serialization_coreSerializersModuleCollector, BSKKodein_memoryReadBuffer, BSKKodein_memoryReadable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface BSKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface BSKBase (BSKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface BSKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BSKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorBSKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface BSKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface BSKByte : BSKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface BSKUByte : BSKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface BSKShort : BSKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface BSKUShort : BSKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface BSKInt : BSKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface BSKUInt : BSKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface BSKLong : BSKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface BSKULong : BSKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface BSKFloat : BSKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface BSKDouble : BSKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface BSKBoolean : BSKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesApi")))
@interface BSKCityBikesApi : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cityBikesApi __attribute__((swift_name("init()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(BSKNetworkResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListWithCompletionHandler:(void (^)(BSKNetworkListResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface BSKLocation : BSKBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(city:country:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (BSKLocation *)doCopyCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(city:country:latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface BSKLocationCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network")))
@interface BSKNetwork : BSKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name location:(BSKLocation *)location stations:(NSArray<BSKStation *> *)stations __attribute__((swift_name("init(id:name:location:stations:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BSKLocation *)component3 __attribute__((swift_name("component3()")));
- (NSArray<BSKStation *> *)component4 __attribute__((swift_name("component4()")));
- (BSKNetwork *)doCopyId:(NSString *)id name:(NSString *)name location:(BSKLocation *)location stations:(NSArray<BSKStation *> *)stations __attribute__((swift_name("doCopy(id:name:location:stations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BSKLocation *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<BSKStation *> *stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network.Companion")))
@interface BSKNetworkCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult")))
@interface BSKNetworkListResult : BSKBase
- (instancetype)initWithNetworks:(NSArray<BSKNetwork *> *)networks __attribute__((swift_name("init(networks:)"))) __attribute__((objc_designated_initializer));
- (NSArray<BSKNetwork *> *)component1 __attribute__((swift_name("component1()")));
- (BSKNetworkListResult *)doCopyNetworks:(NSArray<BSKNetwork *> *)networks __attribute__((swift_name("doCopy(networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BSKNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult.Companion")))
@interface BSKNetworkListResultCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult")))
@interface BSKNetworkResult : BSKBase
- (instancetype)initWithNetwork:(BSKNetwork *)network __attribute__((swift_name("init(network:)"))) __attribute__((objc_designated_initializer));
- (BSKNetwork *)component1 __attribute__((swift_name("component1()")));
- (BSKNetworkResult *)doCopyNetwork:(BSKNetwork *)network __attribute__((swift_name("doCopy(network:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BSKNetwork *network __attribute__((swift_name("network")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult.Companion")))
@interface BSKNetworkResultCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station")))
@interface BSKStation : BSKBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(BSKInt * _Nullable)empty_slots free_bikes:(BSKInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(id:name:empty_slots:free_bikes:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BSKInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BSKInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (BSKStation *)doCopyId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(BSKInt * _Nullable)empty_slots free_bikes:(BSKInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(id:name:empty_slots:free_bikes:latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BSKInt * _Nullable empty_slots __attribute__((swift_name("empty_slots")));
@property (readonly) BSKInt * _Nullable free_bikes __attribute__((swift_name("free_bikes")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.Companion")))
@interface BSKStationCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository")))
@interface BSKCityBikesRepository : BSKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(NSArray<BSKStation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchGroupedNetworkListSuccess:(void (^)(NSDictionary<NSString *, NSArray<BSKNetwork *> *> *))success completionHandler:(void (^)(BSKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchGroupedNetworkList(success:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListSuccess:(void (^)(NSArray<BSKNetwork *> *))success completionHandler:(void (^)(BSKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(success:completionHandler:)")));
- (id<BSKKotlinx_coroutines_coreFlow>)pollNetworkUpdatesNetwork:(NSString *)network __attribute__((swift_name("pollNetworkUpdates(network:)")));
@property (readonly) id<BSKKotlinx_coroutines_coreStateFlow> groupedNetworkList __attribute__((swift_name("groupedNetworkList")));
@property (readonly) id<BSKKotlinx_coroutines_coreStateFlow> networkList __attribute__((swift_name("networkList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository.Companion")))
@interface BSKCityBikesRepositoryCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Kodein_db_apiHasMetadata")))
@protocol BSKKodein_db_apiHasMetadata
@required
- (id<BSKKodein_db_apiMetadata>)getMetadataDb:(id<BSKKodein_db_apiModelDB>)db options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("getMetadata(db:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiMetadata")))
@protocol BSKKodein_db_apiMetadata <BSKKodein_db_apiHasMetadata>
@required
- (NSDictionary<NSString *, id> *)indexes __attribute__((swift_name("indexes()")));
@property (readonly) id id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList")))
@interface BSKNetworkList : BSKBase <BSKKodein_db_apiMetadata>
- (instancetype)initWithId:(NSString *)id networks:(NSArray<BSKNetwork *> *)networks __attribute__((swift_name("init(id:networks:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<BSKNetwork *> *)component2 __attribute__((swift_name("component2()")));
- (BSKNetworkList *)doCopyId:(NSString *)id networks:(NSArray<BSKNetwork *> *)networks __attribute__((swift_name("doCopy(id:networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<BSKNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList.Companion")))
@interface BSKNetworkListCompanion : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

@interface BSKStation (Extensions)
- (int32_t)freeBikes __attribute__((swift_name("freeBikes()")));
- (int32_t)slots __attribute__((swift_name("slots()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface BSKActualKt : BSKBase
+ (NSString *)getApplicationFilesDirectoryPath __attribute__((swift_name("getApplicationFilesDirectoryPath()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface BSKKotlinThrowable : BSKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (BSKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BSKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface BSKKotlinException : BSKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface BSKKotlinRuntimeException : BSKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BSKKotlinIllegalStateException : BSKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface BSKKotlinCancellationException : BSKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BSKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BSKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BSKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BSKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BSKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BSKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BSKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BSKKotlinx_serialization_coreKSerializer <BSKKotlinx_serialization_coreSerializationStrategy, BSKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BSKKotlinUnit : BSKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol BSKKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<BSKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(BSKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol BSKKotlinx_coroutines_coreSharedFlow <BSKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol BSKKotlinx_coroutines_coreStateFlow <BSKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_db_apiKeyMaker")))
@protocol BSKKodein_db_apiKeyMaker
@required
- (BSKKodein_db_apiKey<id> *)keyType:(id<BSKKotlinKClass>)type id:(BSKKotlinArray<id> *)id __attribute__((swift_name("key(type:id:)")));
- (BSKKodein_db_apiKey<id> *)keyFromModel:(id)model options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("keyFrom(model:options:)")));
- (BSKKodein_db_apiKey<id> *)keyFromB64Type:(id<BSKKotlinKClass>)type b64:(NSString *)b64 __attribute__((swift_name("keyFromB64(type:b64:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValueMaker")))
@protocol BSKKodein_db_apiValueMaker
@required
- (id<BSKKodein_db_apiValue>)valueOfValue:(id)value __attribute__((swift_name("valueOf(value:)")));
- (id<BSKKodein_db_apiValue>)valueOfAllValues:(BSKKotlinArray<id> *)values __attribute__((swift_name("valueOfAll(values:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelWrite")))
@protocol BSKKodein_db_apiModelWrite <BSKKodein_db_apiKeyMaker, BSKKodein_db_apiValueMaker>
@required
- (void)deleteType:(id<BSKKotlinKClass>)type key:(BSKKodein_db_apiKey<id> *)key options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("delete(type:key:options:)")));
- (BSKKodein_db_apiKeyAndSize<id> *)putModel:(id)model options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(model:options:)")));
- (int32_t)putKey:(BSKKodein_db_apiKey<id> *)key model:(id)model options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(key:model:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelRead")))
@protocol BSKKodein_db_apiModelRead <BSKKodein_db_apiKeyMaker, BSKKodein_db_apiValueMaker>
@required
- (id<BSKKodein_db_apiModelCursor>)findAllOptions:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAll(options:)")));
- (id<BSKKodein_db_apiModelCursor>)findAllByIndexType:(id<BSKKotlinKClass>)type index:(NSString *)index options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByIndex(type:index:options:)")));
- (id<BSKKodein_db_apiModelCursor>)findAllByTypeType:(id<BSKKotlinKClass>)type options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByType(type:options:)")));
- (id<BSKKodein_db_apiModelCursor>)findByIdType:(id<BSKKotlinKClass>)type id:(id)id isOpen:(BOOL)isOpen options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findById(type:id:isOpen:options:)")));
- (id<BSKKodein_db_apiModelCursor>)findByIndexType:(id<BSKKotlinKClass>)type index:(NSString *)index value:(id)value isOpen:(BOOL)isOpen options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findByIndex(type:index:value:isOpen:options:)")));
- (id<BSKKodein_db_apiSized> _Nullable)getType:(id<BSKKotlinKClass>)type key:(BSKKodein_db_apiKey<id> *)key options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("get(type:key:options:)")));
- (NSSet<NSString *> *)getIndexesOfKey:(BSKKodein_db_apiKey<id> *)key options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("getIndexesOf(key:options:)")));
@end;

__attribute__((swift_name("Kodein_memoryCloseable")))
@protocol BSKKodein_memoryCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelDB")))
@protocol BSKKodein_db_apiModelDB <BSKKodein_db_apiModelWrite, BSKKodein_db_apiModelRead, BSKKodein_memoryCloseable>
@required
- (id<BSKKodein_db_apiModelBatch>)doNewBatch __attribute__((swift_name("doNewBatch()")));
- (id<BSKKodein_db_apiModelSnapshot>)doNewSnapshotOptions:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("doNewSnapshot(options:)")));
- (id<BSKKodein_memoryCloseable>)registerListener:(id<BSKKodein_db_apiDBListener>)listener __attribute__((swift_name("register(listener:)")));
@end;

__attribute__((swift_name("Kodein_db_apiOptions")))
@protocol BSKKodein_db_apiOptions
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsWrite")))
@protocol BSKKodein_db_apiOptionsWrite <BSKKodein_db_apiOptions>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BSKKotlinArray<T> : BSKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BSKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BSKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BSKKotlinx_serialization_coreEncoder
@required
- (id<BSKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BSKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<BSKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BSKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BSKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BSKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<BSKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<BSKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<BSKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) BSKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BSKKotlinx_serialization_coreDecoder
@required
- (id<BSKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (BSKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BSKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BSKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BSKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol BSKKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(BSKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelBatch")))
@protocol BSKKodein_db_apiModelBatch <BSKKodein_db_apiModelWrite, BSKKodein_memoryCloseable>
@required
- (void)writeAfterErrors:(BSKKodein_memoryMaybeThrowable *)afterErrors options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("write(afterErrors:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelSnapshot")))
@protocol BSKKodein_db_apiModelSnapshot <BSKKodein_db_apiModelRead, BSKKodein_memoryCloseable>
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsRead")))
@protocol BSKKodein_db_apiOptionsRead <BSKKodein_db_apiOptions>
@required
@end;

__attribute__((swift_name("Kodein_db_apiDBListener")))
@protocol BSKKodein_db_apiDBListener
@required
- (void)didDeleteKey:(BSKKodein_db_apiKey<id> *)key model:(id _Nullable)model typeName:(id<BSKKodein_memoryReadMemory>)typeName options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didDelete(key:model:typeName:options:)")));
- (void)didPutModel:(id)model key:(BSKKodein_db_apiKey<id> *)key typeName:(id<BSKKodein_memoryReadMemory>)typeName metadata:(id<BSKKodein_db_apiMetadata>)metadata size:(int32_t)size options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didPut(model:key:typeName:metadata:size:options:)")));
- (void)setSubscriptionSubscription:(id<BSKKodein_memoryCloseable>)subscription __attribute__((swift_name("setSubscription(subscription:)")));
- (void)willDeleteKey:(BSKKodein_db_apiKey<id> *)key getModel:(id _Nullable (^)(void))getModel typeName:(id<BSKKodein_memoryReadMemory>)typeName options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willDelete(key:getModel:typeName:options:)")));
- (void)willPutModel:(id)model typeName:(id<BSKKodein_memoryReadMemory>)typeName metadata:(id<BSKKodein_db_apiMetadata>)metadata options:(BSKKotlinArray<id<BSKKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willPut(model:typeName:metadata:options:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BSKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BSKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol BSKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol BSKKotlinKClass <BSKKotlinKDeclarationContainer, BSKKotlinKAnnotatedElement, BSKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKey")))
@interface BSKKodein_db_apiKey<__covariant T> : BSKBase
- (instancetype)initWithBytes:(id<BSKKodein_memoryReadMemory>)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
- (id<BSKKodein_memoryReadMemory>)component1 __attribute__((swift_name("component1()")));
- (BSKKodein_db_apiKey<T> *)doCopyBytes:(id<BSKKodein_memoryReadMemory>)bytes __attribute__((swift_name("doCopy(bytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toBase64 __attribute__((swift_name("toBase64()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BSKKodein_memoryReadMemory> bytes __attribute__((swift_name("bytes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKeyAndSize")))
@interface BSKKodein_db_apiKeyAndSize<M> : BSKBase
- (instancetype)initWithKey:(BSKKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("init(key:size:)"))) __attribute__((objc_designated_initializer));
- (BSKKodein_db_apiKey<M> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BSKKodein_db_apiKeyAndSize<M> *)doCopyKey:(BSKKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("doCopy(key:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BSKKodein_db_apiKey<M> *key __attribute__((swift_name("key")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBody")))
@protocol BSKKodein_db_apiBody
@required
- (void)writeIntoDst:(id<BSKKodein_memoryWriteable>)dst __attribute__((swift_name("writeInto(dst:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValue")))
@protocol BSKKodein_db_apiValue <BSKKodein_db_apiBody>
@required
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBaseCursor")))
@protocol BSKKodein_db_apiBaseCursor <BSKKodein_memoryCloseable>
@required
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (void)next __attribute__((swift_name("next()")));
- (void)prev __attribute__((swift_name("prev()")));
- (void)seekToTarget:(id<BSKKodein_memoryReadMemory>)target __attribute__((swift_name("seekTo(target:)")));
- (void)seekToFirst __attribute__((swift_name("seekToFirst()")));
- (void)seekToLast __attribute__((swift_name("seekToLast()")));
- (id<BSKKodein_memoryReadMemory>)transientSeekKey __attribute__((swift_name("transientSeekKey()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelCursor")))
@protocol BSKKodein_db_apiModelCursor <BSKKodein_db_apiBaseCursor>
@required
- (id<BSKKodein_db_apiModelCursor>)duplicate __attribute__((swift_name("duplicate()")));
- (BSKKodein_db_apiKey<id> *)key __attribute__((swift_name("key()")));
- (id<BSKKodein_db_apiSized>)modelOptions:(BSKKotlinArray<id<BSKKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("model(options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiSized")))
@protocol BSKKodein_db_apiSized
@required
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
@property (readonly) id _Nullable model __attribute__((swift_name("model")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol BSKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BSKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BSKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BSKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BSKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BSKKotlinx_serialization_coreSerializersModule : BSKBase
- (void)dumpToCollector:(id<BSKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<BSKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<BSKKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<BSKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BSKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<BSKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BSKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol BSKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BSKKotlinx_serialization_coreSerialKind : BSKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BSKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BSKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BSKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BSKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BSKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BSKKotlinNothing : BSKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_memoryMaybeThrowable")))
@interface BSKKodein_memoryMaybeThrowable : BSKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addEx:(BSKKotlinThrowable * _Nullable)ex __attribute__((swift_name("add(ex:)")));
- (void)shoot __attribute__((swift_name("shoot()")));
@property (readonly) BSKKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("Kodein_memoryReadMemory")))
@protocol BSKKodein_memoryReadMemory
@required
- (id<BSKKodein_memoryReadBuffer>)duplicate __attribute__((swift_name("duplicate()")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int8_t)getByteIndex:(int32_t)index __attribute__((swift_name("getByte(index:)")));
- (void)getBytesIndex:(int32_t)index dst:(BSKKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("getBytes(index:dst:dstOffset:length:)")));
- (unichar)getCharIndex:(int32_t)index __attribute__((swift_name("getChar(index:)")));
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (int16_t)getShortIndex:(int32_t)index __attribute__((swift_name("getShort(index:)")));
- (id<BSKKodein_memoryReadMemory>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (id<BSKKodein_memoryReadBuffer>)slice __attribute__((swift_name("slice()")));
- (id<BSKKodein_memoryReadBuffer>)sliceIndex:(int32_t)index length:(int32_t)length __attribute__((swift_name("slice(index:length:)")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@end;

__attribute__((swift_name("Kodein_memoryWriteable")))
@protocol BSKKodein_memoryWriteable
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)putByteValue:(int8_t)value __attribute__((swift_name("putByte(value:)")));
- (void)putBytesSrc:(BSKKotlinByteArray *)src srcOffset:(int32_t)srcOffset length:(int32_t)length __attribute__((swift_name("putBytes(src:srcOffset:length:)")));
- (void)putBytesSrc:(id<BSKKodein_memoryReadable>)src length:(int32_t)length __attribute__((swift_name("putBytes(src:length:)")));
- (void)putCharValue:(unichar)value __attribute__((swift_name("putChar(value:)")));
- (void)putDoubleValue:(double)value __attribute__((swift_name("putDouble(value:)")));
- (void)putFloatValue:(float)value __attribute__((swift_name("putFloat(value:)")));
- (void)putIntValue:(int32_t)value __attribute__((swift_name("putInt(value:)")));
- (void)putLongValue:(int64_t)value __attribute__((swift_name("putLong(value:)")));
- (void)putShortValue:(int16_t)value __attribute__((swift_name("putShort(value:)")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BSKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BSKKotlinKClass>)kClass serializer:(id<BSKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BSKKotlinKClass>)baseClass actualClass:(id<BSKKotlinKClass>)actualClass actualSerializer:(id<BSKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BSKKotlinKClass>)baseClass defaultSerializerProvider:(id<BSKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kodein_memoryReadable")))
@protocol BSKKodein_memoryReadable
@required
- (id<BSKKodein_memoryReadable>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)readBytesDst:(BSKKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("readBytes(dst:dstOffset:length:)")));
- (unichar)readChar __attribute__((swift_name("readChar()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)receive __attribute__((swift_name("receive()")));
- (int32_t)receiveDst:(BSKKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("receive(dst:dstOffset:length:)")));
- (int32_t)skipCount:(int32_t)count __attribute__((swift_name("skip(count:)")));
- (BOOL)valid __attribute__((swift_name("valid()")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kodein_memoryReadBuffer")))
@protocol BSKKodein_memoryReadBuffer <BSKKodein_memoryReadable, BSKKodein_memoryReadMemory>
@required
@property int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BSKKotlinByteArray : BSKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BSKByte *(^)(BSKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BSKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface BSKKotlinByteIterator : BSKBase <BSKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BSKByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
