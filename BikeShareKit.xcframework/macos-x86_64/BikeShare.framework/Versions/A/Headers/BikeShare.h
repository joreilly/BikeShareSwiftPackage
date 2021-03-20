#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BikeShareNetworkResult, BikeShareNetworkListResult, BikeShareLocation, BikeShareStation, BikeShareNetwork, BikeShareKotlinUnit, BikeShareKotlinArray<T>, BikeShareNetworkList, BikeShareKotlinThrowable, BikeShareKotlinException, BikeShareKotlinRuntimeException, BikeShareKotlinIllegalStateException, BikeShareKodein_db_apiKey<__covariant T>, BikeShareKodein_db_apiKeyAndSize<M>, BikeShareKotlinx_serialization_coreSerializersModule, BikeShareKotlinx_serialization_coreSerialKind, BikeShareKotlinNothing, BikeShareKodein_memoryMaybeThrowable, BikeShareKotlinByteArray, BikeShareKotlinByteIterator;

@protocol BikeShareKotlinx_serialization_coreKSerializer, BikeShareKotlinx_coroutines_coreFlow, BikeShareKotlinx_coroutines_coreStateFlow, BikeShareKodein_db_apiMetadata, BikeShareKodein_db_apiModelDB, BikeShareKodein_db_apiOptionsWrite, BikeShareKodein_db_apiHasMetadata, BikeShareKotlinx_serialization_coreEncoder, BikeShareKotlinx_serialization_coreSerialDescriptor, BikeShareKotlinx_serialization_coreSerializationStrategy, BikeShareKotlinx_serialization_coreDecoder, BikeShareKotlinx_serialization_coreDeserializationStrategy, BikeShareKotlinx_coroutines_coreFlowCollector, BikeShareKotlinx_coroutines_coreSharedFlow, BikeShareKodein_db_apiModelBatch, BikeShareKodein_db_apiModelSnapshot, BikeShareKodein_db_apiOptionsRead, BikeShareKodein_memoryCloseable, BikeShareKodein_db_apiDBListener, BikeShareKotlinKClass, BikeShareKodein_db_apiKeyMaker, BikeShareKodein_db_apiValue, BikeShareKodein_db_apiValueMaker, BikeShareKodein_db_apiModelWrite, BikeShareKodein_db_apiModelCursor, BikeShareKodein_db_apiSized, BikeShareKodein_db_apiModelRead, BikeShareKodein_db_apiOptions, BikeShareKotlinIterator, BikeShareKotlinx_serialization_coreCompositeEncoder, BikeShareKotlinAnnotation, BikeShareKotlinx_serialization_coreCompositeDecoder, BikeShareKodein_memoryReadMemory, BikeShareKotlinKDeclarationContainer, BikeShareKotlinKAnnotatedElement, BikeShareKotlinKClassifier, BikeShareKodein_memoryWriteable, BikeShareKodein_db_apiBody, BikeShareKodein_db_apiBaseCursor, BikeShareKotlinx_serialization_coreSerializersModuleCollector, BikeShareKodein_memoryReadBuffer, BikeShareKodein_memoryReadable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface BikeShareBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface BikeShareBase (BikeShareBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface BikeShareMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BikeShareMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorBikeShareKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface BikeShareNumber : NSNumber
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
@interface BikeShareByte : BikeShareNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface BikeShareUByte : BikeShareNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface BikeShareShort : BikeShareNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface BikeShareUShort : BikeShareNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface BikeShareInt : BikeShareNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface BikeShareUInt : BikeShareNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface BikeShareLong : BikeShareNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface BikeShareULong : BikeShareNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface BikeShareFloat : BikeShareNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface BikeShareDouble : BikeShareNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface BikeShareBoolean : BikeShareNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesApi")))
@interface BikeShareCityBikesApi : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cityBikesApi __attribute__((swift_name("init()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(BikeShareNetworkResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListWithCompletionHandler:(void (^)(BikeShareNetworkListResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface BikeShareLocation : BikeShareBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(city:country:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (BikeShareLocation *)doCopyCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(city:country:latitude:longitude:)")));
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
@interface BikeShareLocationCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network")))
@interface BikeShareNetwork : BikeShareBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name location:(BikeShareLocation *)location stations:(NSArray<BikeShareStation *> *)stations __attribute__((swift_name("init(id:name:location:stations:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BikeShareLocation *)component3 __attribute__((swift_name("component3()")));
- (NSArray<BikeShareStation *> *)component4 __attribute__((swift_name("component4()")));
- (BikeShareNetwork *)doCopyId:(NSString *)id name:(NSString *)name location:(BikeShareLocation *)location stations:(NSArray<BikeShareStation *> *)stations __attribute__((swift_name("doCopy(id:name:location:stations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BikeShareLocation *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<BikeShareStation *> *stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network.Companion")))
@interface BikeShareNetworkCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult")))
@interface BikeShareNetworkListResult : BikeShareBase
- (instancetype)initWithNetworks:(NSArray<BikeShareNetwork *> *)networks __attribute__((swift_name("init(networks:)"))) __attribute__((objc_designated_initializer));
- (NSArray<BikeShareNetwork *> *)component1 __attribute__((swift_name("component1()")));
- (BikeShareNetworkListResult *)doCopyNetworks:(NSArray<BikeShareNetwork *> *)networks __attribute__((swift_name("doCopy(networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BikeShareNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult.Companion")))
@interface BikeShareNetworkListResultCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult")))
@interface BikeShareNetworkResult : BikeShareBase
- (instancetype)initWithNetwork:(BikeShareNetwork *)network __attribute__((swift_name("init(network:)"))) __attribute__((objc_designated_initializer));
- (BikeShareNetwork *)component1 __attribute__((swift_name("component1()")));
- (BikeShareNetworkResult *)doCopyNetwork:(BikeShareNetwork *)network __attribute__((swift_name("doCopy(network:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BikeShareNetwork *network __attribute__((swift_name("network")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult.Companion")))
@interface BikeShareNetworkResultCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station")))
@interface BikeShareStation : BikeShareBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(BikeShareInt * _Nullable)empty_slots free_bikes:(BikeShareInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(id:name:empty_slots:free_bikes:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BikeShareInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BikeShareInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (BikeShareStation *)doCopyId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(BikeShareInt * _Nullable)empty_slots free_bikes:(BikeShareInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(id:name:empty_slots:free_bikes:latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BikeShareInt * _Nullable empty_slots __attribute__((swift_name("empty_slots")));
@property (readonly) BikeShareInt * _Nullable free_bikes __attribute__((swift_name("free_bikes")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.Companion")))
@interface BikeShareStationCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository")))
@interface BikeShareCityBikesRepository : BikeShareBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(NSArray<BikeShareStation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchGroupedNetworkListSuccess:(void (^)(NSDictionary<NSString *, NSArray<BikeShareNetwork *> *> *))success completionHandler:(void (^)(BikeShareKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchGroupedNetworkList(success:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListSuccess:(void (^)(NSArray<BikeShareNetwork *> *))success completionHandler:(void (^)(BikeShareKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(success:completionHandler:)")));
- (id<BikeShareKotlinx_coroutines_coreFlow>)pollNetworkUpdatesNetwork:(NSString *)network __attribute__((swift_name("pollNetworkUpdates(network:)")));
@property (readonly) id<BikeShareKotlinx_coroutines_coreStateFlow> groupedNetworkList __attribute__((swift_name("groupedNetworkList")));
@property (readonly) id<BikeShareKotlinx_coroutines_coreStateFlow> networkList __attribute__((swift_name("networkList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository.Companion")))
@interface BikeShareCityBikesRepositoryCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Kodein_db_apiHasMetadata")))
@protocol BikeShareKodein_db_apiHasMetadata
@required
- (id<BikeShareKodein_db_apiMetadata>)getMetadataDb:(id<BikeShareKodein_db_apiModelDB>)db options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("getMetadata(db:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiMetadata")))
@protocol BikeShareKodein_db_apiMetadata <BikeShareKodein_db_apiHasMetadata>
@required
- (NSDictionary<NSString *, id> *)indexes __attribute__((swift_name("indexes()")));
@property (readonly) id id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList")))
@interface BikeShareNetworkList : BikeShareBase <BikeShareKodein_db_apiMetadata>
- (instancetype)initWithId:(NSString *)id networks:(NSArray<BikeShareNetwork *> *)networks __attribute__((swift_name("init(id:networks:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<BikeShareNetwork *> *)component2 __attribute__((swift_name("component2()")));
- (BikeShareNetworkList *)doCopyId:(NSString *)id networks:(NSArray<BikeShareNetwork *> *)networks __attribute__((swift_name("doCopy(id:networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<BikeShareNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList.Companion")))
@interface BikeShareNetworkListCompanion : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

@interface BikeShareStation (Extensions)
- (int32_t)freeBikes __attribute__((swift_name("freeBikes()")));
- (int32_t)slots __attribute__((swift_name("slots()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface BikeShareActualKt : BikeShareBase
+ (NSString *)getApplicationFilesDirectoryPath __attribute__((swift_name("getApplicationFilesDirectoryPath()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface BikeShareKotlinThrowable : BikeShareBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (BikeShareKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BikeShareKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface BikeShareKotlinException : BikeShareKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface BikeShareKotlinRuntimeException : BikeShareKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BikeShareKotlinIllegalStateException : BikeShareKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface BikeShareKotlinCancellationException : BikeShareKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BikeShareKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BikeShareKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BikeShareKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BikeShareKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BikeShareKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BikeShareKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BikeShareKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BikeShareKotlinx_serialization_coreKSerializer <BikeShareKotlinx_serialization_coreSerializationStrategy, BikeShareKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BikeShareKotlinUnit : BikeShareBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol BikeShareKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<BikeShareKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(BikeShareKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol BikeShareKotlinx_coroutines_coreSharedFlow <BikeShareKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol BikeShareKotlinx_coroutines_coreStateFlow <BikeShareKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_db_apiKeyMaker")))
@protocol BikeShareKodein_db_apiKeyMaker
@required
- (BikeShareKodein_db_apiKey<id> *)keyType:(id<BikeShareKotlinKClass>)type id:(BikeShareKotlinArray<id> *)id __attribute__((swift_name("key(type:id:)")));
- (BikeShareKodein_db_apiKey<id> *)keyFromModel:(id)model options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("keyFrom(model:options:)")));
- (BikeShareKodein_db_apiKey<id> *)keyFromB64Type:(id<BikeShareKotlinKClass>)type b64:(NSString *)b64 __attribute__((swift_name("keyFromB64(type:b64:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValueMaker")))
@protocol BikeShareKodein_db_apiValueMaker
@required
- (id<BikeShareKodein_db_apiValue>)valueOfValue:(id)value __attribute__((swift_name("valueOf(value:)")));
- (id<BikeShareKodein_db_apiValue>)valueOfAllValues:(BikeShareKotlinArray<id> *)values __attribute__((swift_name("valueOfAll(values:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelWrite")))
@protocol BikeShareKodein_db_apiModelWrite <BikeShareKodein_db_apiKeyMaker, BikeShareKodein_db_apiValueMaker>
@required
- (void)deleteType:(id<BikeShareKotlinKClass>)type key:(BikeShareKodein_db_apiKey<id> *)key options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("delete(type:key:options:)")));
- (BikeShareKodein_db_apiKeyAndSize<id> *)putModel:(id)model options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(model:options:)")));
- (int32_t)putKey:(BikeShareKodein_db_apiKey<id> *)key model:(id)model options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(key:model:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelRead")))
@protocol BikeShareKodein_db_apiModelRead <BikeShareKodein_db_apiKeyMaker, BikeShareKodein_db_apiValueMaker>
@required
- (id<BikeShareKodein_db_apiModelCursor>)findAllOptions:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAll(options:)")));
- (id<BikeShareKodein_db_apiModelCursor>)findAllByIndexType:(id<BikeShareKotlinKClass>)type index:(NSString *)index options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByIndex(type:index:options:)")));
- (id<BikeShareKodein_db_apiModelCursor>)findAllByTypeType:(id<BikeShareKotlinKClass>)type options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByType(type:options:)")));
- (id<BikeShareKodein_db_apiModelCursor>)findByIdType:(id<BikeShareKotlinKClass>)type id:(id)id isOpen:(BOOL)isOpen options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findById(type:id:isOpen:options:)")));
- (id<BikeShareKodein_db_apiModelCursor>)findByIndexType:(id<BikeShareKotlinKClass>)type index:(NSString *)index value:(id)value isOpen:(BOOL)isOpen options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findByIndex(type:index:value:isOpen:options:)")));
- (id<BikeShareKodein_db_apiSized> _Nullable)getType:(id<BikeShareKotlinKClass>)type key:(BikeShareKodein_db_apiKey<id> *)key options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("get(type:key:options:)")));
- (NSSet<NSString *> *)getIndexesOfKey:(BikeShareKodein_db_apiKey<id> *)key options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("getIndexesOf(key:options:)")));
@end;

__attribute__((swift_name("Kodein_memoryCloseable")))
@protocol BikeShareKodein_memoryCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelDB")))
@protocol BikeShareKodein_db_apiModelDB <BikeShareKodein_db_apiModelWrite, BikeShareKodein_db_apiModelRead, BikeShareKodein_memoryCloseable>
@required
- (id<BikeShareKodein_db_apiModelBatch>)doNewBatch __attribute__((swift_name("doNewBatch()")));
- (id<BikeShareKodein_db_apiModelSnapshot>)doNewSnapshotOptions:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("doNewSnapshot(options:)")));
- (id<BikeShareKodein_memoryCloseable>)registerListener:(id<BikeShareKodein_db_apiDBListener>)listener __attribute__((swift_name("register(listener:)")));
@end;

__attribute__((swift_name("Kodein_db_apiOptions")))
@protocol BikeShareKodein_db_apiOptions
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsWrite")))
@protocol BikeShareKodein_db_apiOptionsWrite <BikeShareKodein_db_apiOptions>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BikeShareKotlinArray<T> : BikeShareBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BikeShareInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BikeShareKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BikeShareKotlinx_serialization_coreEncoder
@required
- (id<BikeShareKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BikeShareKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<BikeShareKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BikeShareKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BikeShareKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BikeShareKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<BikeShareKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<BikeShareKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<BikeShareKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) BikeShareKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BikeShareKotlinx_serialization_coreDecoder
@required
- (id<BikeShareKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (BikeShareKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BikeShareKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BikeShareKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BikeShareKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol BikeShareKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(BikeShareKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelBatch")))
@protocol BikeShareKodein_db_apiModelBatch <BikeShareKodein_db_apiModelWrite, BikeShareKodein_memoryCloseable>
@required
- (void)writeAfterErrors:(BikeShareKodein_memoryMaybeThrowable *)afterErrors options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("write(afterErrors:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelSnapshot")))
@protocol BikeShareKodein_db_apiModelSnapshot <BikeShareKodein_db_apiModelRead, BikeShareKodein_memoryCloseable>
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsRead")))
@protocol BikeShareKodein_db_apiOptionsRead <BikeShareKodein_db_apiOptions>
@required
@end;

__attribute__((swift_name("Kodein_db_apiDBListener")))
@protocol BikeShareKodein_db_apiDBListener
@required
- (void)didDeleteKey:(BikeShareKodein_db_apiKey<id> *)key model:(id _Nullable)model typeName:(id<BikeShareKodein_memoryReadMemory>)typeName options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didDelete(key:model:typeName:options:)")));
- (void)didPutModel:(id)model key:(BikeShareKodein_db_apiKey<id> *)key typeName:(id<BikeShareKodein_memoryReadMemory>)typeName metadata:(id<BikeShareKodein_db_apiMetadata>)metadata size:(int32_t)size options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didPut(model:key:typeName:metadata:size:options:)")));
- (void)setSubscriptionSubscription:(id<BikeShareKodein_memoryCloseable>)subscription __attribute__((swift_name("setSubscription(subscription:)")));
- (void)willDeleteKey:(BikeShareKodein_db_apiKey<id> *)key getModel:(id _Nullable (^)(void))getModel typeName:(id<BikeShareKodein_memoryReadMemory>)typeName options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willDelete(key:getModel:typeName:options:)")));
- (void)willPutModel:(id)model typeName:(id<BikeShareKodein_memoryReadMemory>)typeName metadata:(id<BikeShareKodein_db_apiMetadata>)metadata options:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willPut(model:typeName:metadata:options:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BikeShareKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BikeShareKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol BikeShareKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol BikeShareKotlinKClass <BikeShareKotlinKDeclarationContainer, BikeShareKotlinKAnnotatedElement, BikeShareKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKey")))
@interface BikeShareKodein_db_apiKey<__covariant T> : BikeShareBase
- (instancetype)initWithBytes:(id<BikeShareKodein_memoryReadMemory>)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
- (id<BikeShareKodein_memoryReadMemory>)component1 __attribute__((swift_name("component1()")));
- (BikeShareKodein_db_apiKey<T> *)doCopyBytes:(id<BikeShareKodein_memoryReadMemory>)bytes __attribute__((swift_name("doCopy(bytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toBase64 __attribute__((swift_name("toBase64()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BikeShareKodein_memoryReadMemory> bytes __attribute__((swift_name("bytes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKeyAndSize")))
@interface BikeShareKodein_db_apiKeyAndSize<M> : BikeShareBase
- (instancetype)initWithKey:(BikeShareKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("init(key:size:)"))) __attribute__((objc_designated_initializer));
- (BikeShareKodein_db_apiKey<M> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BikeShareKodein_db_apiKeyAndSize<M> *)doCopyKey:(BikeShareKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("doCopy(key:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BikeShareKodein_db_apiKey<M> *key __attribute__((swift_name("key")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBody")))
@protocol BikeShareKodein_db_apiBody
@required
- (void)writeIntoDst:(id<BikeShareKodein_memoryWriteable>)dst __attribute__((swift_name("writeInto(dst:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValue")))
@protocol BikeShareKodein_db_apiValue <BikeShareKodein_db_apiBody>
@required
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBaseCursor")))
@protocol BikeShareKodein_db_apiBaseCursor <BikeShareKodein_memoryCloseable>
@required
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (void)next __attribute__((swift_name("next()")));
- (void)prev __attribute__((swift_name("prev()")));
- (void)seekToTarget:(id<BikeShareKodein_memoryReadMemory>)target __attribute__((swift_name("seekTo(target:)")));
- (void)seekToFirst __attribute__((swift_name("seekToFirst()")));
- (void)seekToLast __attribute__((swift_name("seekToLast()")));
- (id<BikeShareKodein_memoryReadMemory>)transientSeekKey __attribute__((swift_name("transientSeekKey()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelCursor")))
@protocol BikeShareKodein_db_apiModelCursor <BikeShareKodein_db_apiBaseCursor>
@required
- (id<BikeShareKodein_db_apiModelCursor>)duplicate __attribute__((swift_name("duplicate()")));
- (BikeShareKodein_db_apiKey<id> *)key __attribute__((swift_name("key()")));
- (id<BikeShareKodein_db_apiSized>)modelOptions:(BikeShareKotlinArray<id<BikeShareKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("model(options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiSized")))
@protocol BikeShareKodein_db_apiSized
@required
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
@property (readonly) id _Nullable model __attribute__((swift_name("model")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol BikeShareKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BikeShareKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BikeShareKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BikeShareKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BikeShareKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BikeShareKotlinx_serialization_coreSerializersModule : BikeShareBase
- (void)dumpToCollector:(id<BikeShareKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<BikeShareKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<BikeShareKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<BikeShareKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BikeShareKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<BikeShareKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BikeShareKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol BikeShareKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BikeShareKotlinx_serialization_coreSerialKind : BikeShareBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BikeShareKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BikeShareKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BikeShareKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BikeShareKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BikeShareKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BikeShareKotlinNothing : BikeShareBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_memoryMaybeThrowable")))
@interface BikeShareKodein_memoryMaybeThrowable : BikeShareBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addEx:(BikeShareKotlinThrowable * _Nullable)ex __attribute__((swift_name("add(ex:)")));
- (void)shoot __attribute__((swift_name("shoot()")));
@property (readonly) BikeShareKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("Kodein_memoryReadMemory")))
@protocol BikeShareKodein_memoryReadMemory
@required
- (id<BikeShareKodein_memoryReadBuffer>)duplicate __attribute__((swift_name("duplicate()")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int8_t)getByteIndex:(int32_t)index __attribute__((swift_name("getByte(index:)")));
- (void)getBytesIndex:(int32_t)index dst:(BikeShareKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("getBytes(index:dst:dstOffset:length:)")));
- (unichar)getCharIndex:(int32_t)index __attribute__((swift_name("getChar(index:)")));
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (int16_t)getShortIndex:(int32_t)index __attribute__((swift_name("getShort(index:)")));
- (id<BikeShareKodein_memoryReadMemory>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (id<BikeShareKodein_memoryReadBuffer>)slice __attribute__((swift_name("slice()")));
- (id<BikeShareKodein_memoryReadBuffer>)sliceIndex:(int32_t)index length:(int32_t)length __attribute__((swift_name("slice(index:length:)")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@end;

__attribute__((swift_name("Kodein_memoryWriteable")))
@protocol BikeShareKodein_memoryWriteable
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)putByteValue:(int8_t)value __attribute__((swift_name("putByte(value:)")));
- (void)putBytesSrc:(BikeShareKotlinByteArray *)src srcOffset:(int32_t)srcOffset length:(int32_t)length __attribute__((swift_name("putBytes(src:srcOffset:length:)")));
- (void)putBytesSrc:(id<BikeShareKodein_memoryReadable>)src length:(int32_t)length __attribute__((swift_name("putBytes(src:length:)")));
- (void)putCharValue:(unichar)value __attribute__((swift_name("putChar(value:)")));
- (void)putDoubleValue:(double)value __attribute__((swift_name("putDouble(value:)")));
- (void)putFloatValue:(float)value __attribute__((swift_name("putFloat(value:)")));
- (void)putIntValue:(int32_t)value __attribute__((swift_name("putInt(value:)")));
- (void)putLongValue:(int64_t)value __attribute__((swift_name("putLong(value:)")));
- (void)putShortValue:(int16_t)value __attribute__((swift_name("putShort(value:)")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BikeShareKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BikeShareKotlinKClass>)kClass serializer:(id<BikeShareKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BikeShareKotlinKClass>)baseClass actualClass:(id<BikeShareKotlinKClass>)actualClass actualSerializer:(id<BikeShareKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BikeShareKotlinKClass>)baseClass defaultSerializerProvider:(id<BikeShareKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kodein_memoryReadable")))
@protocol BikeShareKodein_memoryReadable
@required
- (id<BikeShareKodein_memoryReadable>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)readBytesDst:(BikeShareKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("readBytes(dst:dstOffset:length:)")));
- (unichar)readChar __attribute__((swift_name("readChar()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)receive __attribute__((swift_name("receive()")));
- (int32_t)receiveDst:(BikeShareKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("receive(dst:dstOffset:length:)")));
- (int32_t)skipCount:(int32_t)count __attribute__((swift_name("skip(count:)")));
- (BOOL)valid __attribute__((swift_name("valid()")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kodein_memoryReadBuffer")))
@protocol BikeShareKodein_memoryReadBuffer <BikeShareKodein_memoryReadable, BikeShareKodein_memoryReadMemory>
@required
@property int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BikeShareKotlinByteArray : BikeShareBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BikeShareByte *(^)(BikeShareInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BikeShareKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface BikeShareKotlinByteIterator : BikeShareBase <BikeShareKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BikeShareByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
