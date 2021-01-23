#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonNetworkResult, CommonNetworkListResult, CommonLocation, CommonStation, CommonNetwork, CommonKotlinUnit, CommonKotlinArray<T>, CommonNetworkList, CommonKotlinThrowable, CommonKotlinException, CommonKotlinRuntimeException, CommonKotlinIllegalStateException, CommonKodein_db_apiKey<__covariant T>, CommonKodein_db_apiKeyAndSize<M>, CommonKotlinx_serialization_coreSerializersModule, CommonKotlinx_serialization_coreSerialKind, CommonKotlinNothing, CommonKodein_memoryMaybeThrowable, CommonKotlinByteArray, CommonKotlinByteIterator;

@protocol CommonKotlinx_serialization_coreKSerializer, CommonKotlinx_coroutines_coreFlow, CommonKotlinx_coroutines_coreStateFlow, CommonKodein_db_apiMetadata, CommonKodein_db_apiModelDB, CommonKodein_db_apiOptionsWrite, CommonKodein_db_apiHasMetadata, CommonKotlinx_serialization_coreEncoder, CommonKotlinx_serialization_coreSerialDescriptor, CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinx_serialization_coreDecoder, CommonKotlinx_serialization_coreDeserializationStrategy, CommonKotlinx_coroutines_coreFlowCollector, CommonKotlinx_coroutines_coreSharedFlow, CommonKodein_db_apiModelBatch, CommonKodein_db_apiModelSnapshot, CommonKodein_db_apiOptionsRead, CommonKodein_memoryCloseable, CommonKodein_db_apiDBListener, CommonKotlinKClass, CommonKodein_db_apiKeyMaker, CommonKodein_db_apiValue, CommonKodein_db_apiValueMaker, CommonKodein_db_apiModelWrite, CommonKodein_db_apiModelCursor, CommonKodein_db_apiSized, CommonKodein_db_apiModelRead, CommonKodein_db_apiOptions, CommonKotlinIterator, CommonKotlinx_serialization_coreCompositeEncoder, CommonKotlinAnnotation, CommonKotlinx_serialization_coreCompositeDecoder, CommonKodein_memoryReadMemory, CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier, CommonKodein_memoryWriteable, CommonKodein_db_apiBody, CommonKodein_db_apiBaseCursor, CommonKotlinx_serialization_coreSerializersModuleCollector, CommonKodein_memoryReadBuffer, CommonKodein_memoryReadable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface CommonBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CommonBase (CommonBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CommonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCommonKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CommonNumber : NSNumber
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
@interface CommonByte : CommonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CommonUByte : CommonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CommonShort : CommonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CommonUShort : CommonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CommonInt : CommonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CommonUInt : CommonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CommonLong : CommonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CommonULong : CommonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CommonFloat : CommonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CommonDouble : CommonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CommonBoolean : CommonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesApi")))
@interface CommonCityBikesApi : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cityBikesApi __attribute__((swift_name("init()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(CommonNetworkResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListWithCompletionHandler:(void (^)(CommonNetworkListResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface CommonLocation : CommonBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(city:country:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (CommonLocation *)doCopyCity:(NSString *)city country:(NSString *)country latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(city:country:latitude:longitude:)")));
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
@interface CommonLocationCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network")))
@interface CommonNetwork : CommonBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name location:(CommonLocation *)location stations:(NSArray<CommonStation *> *)stations __attribute__((swift_name("init(id:name:location:stations:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonLocation *)component3 __attribute__((swift_name("component3()")));
- (NSArray<CommonStation *> *)component4 __attribute__((swift_name("component4()")));
- (CommonNetwork *)doCopyId:(NSString *)id name:(NSString *)name location:(CommonLocation *)location stations:(NSArray<CommonStation *> *)stations __attribute__((swift_name("doCopy(id:name:location:stations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) CommonLocation *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<CommonStation *> *stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network.Companion")))
@interface CommonNetworkCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult")))
@interface CommonNetworkListResult : CommonBase
- (instancetype)initWithNetworks:(NSArray<CommonNetwork *> *)networks __attribute__((swift_name("init(networks:)"))) __attribute__((objc_designated_initializer));
- (NSArray<CommonNetwork *> *)component1 __attribute__((swift_name("component1()")));
- (CommonNetworkListResult *)doCopyNetworks:(NSArray<CommonNetwork *> *)networks __attribute__((swift_name("doCopy(networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CommonNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkListResult.Companion")))
@interface CommonNetworkListResultCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult")))
@interface CommonNetworkResult : CommonBase
- (instancetype)initWithNetwork:(CommonNetwork *)network __attribute__((swift_name("init(network:)"))) __attribute__((objc_designated_initializer));
- (CommonNetwork *)component1 __attribute__((swift_name("component1()")));
- (CommonNetworkResult *)doCopyNetwork:(CommonNetwork *)network __attribute__((swift_name("doCopy(network:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonNetwork *network __attribute__((swift_name("network")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult.Companion")))
@interface CommonNetworkResultCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station")))
@interface CommonStation : CommonBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(CommonInt * _Nullable)empty_slots free_bikes:(CommonInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(id:name:empty_slots:free_bikes:latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (CommonStation *)doCopyId:(NSString * _Nullable)id name:(NSString *)name empty_slots:(CommonInt * _Nullable)empty_slots free_bikes:(CommonInt * _Nullable)free_bikes latitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(id:name:empty_slots:free_bikes:latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonInt * _Nullable empty_slots __attribute__((swift_name("empty_slots")));
@property (readonly) CommonInt * _Nullable free_bikes __attribute__((swift_name("free_bikes")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.Companion")))
@interface CommonStationCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository")))
@interface CommonCityBikesRepository : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchBikeShareInfoNetwork:(NSString *)network completionHandler:(void (^)(NSArray<CommonStation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchBikeShareInfo(network:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchGroupedNetworkListSuccess:(void (^)(NSDictionary<NSString *, NSArray<CommonNetwork *> *> *))success completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchGroupedNetworkList(success:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchNetworkListSuccess:(void (^)(NSArray<CommonNetwork *> *))success completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchNetworkList(success:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)pollNetworkUpdatesNetwork:(NSString *)network __attribute__((swift_name("pollNetworkUpdates(network:)")));
@property (readonly) id<CommonKotlinx_coroutines_coreStateFlow> groupedNetworkList __attribute__((swift_name("groupedNetworkList")));
@property (readonly) id<CommonKotlinx_coroutines_coreStateFlow> networkList __attribute__((swift_name("networkList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityBikesRepository.Companion")))
@interface CommonCityBikesRepositoryCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Kodein_db_apiHasMetadata")))
@protocol CommonKodein_db_apiHasMetadata
@required
- (id<CommonKodein_db_apiMetadata>)getMetadataDb:(id<CommonKodein_db_apiModelDB>)db options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("getMetadata(db:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiMetadata")))
@protocol CommonKodein_db_apiMetadata <CommonKodein_db_apiHasMetadata>
@required
- (NSDictionary<NSString *, id> *)indexes __attribute__((swift_name("indexes()")));
@property (readonly) id id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList")))
@interface CommonNetworkList : CommonBase <CommonKodein_db_apiMetadata>
- (instancetype)initWithId:(NSString *)id networks:(NSArray<CommonNetwork *> *)networks __attribute__((swift_name("init(id:networks:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<CommonNetwork *> *)component2 __attribute__((swift_name("component2()")));
- (CommonNetworkList *)doCopyId:(NSString *)id networks:(NSArray<CommonNetwork *> *)networks __attribute__((swift_name("doCopy(id:networks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<CommonNetwork *> *networks __attribute__((swift_name("networks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkList.Companion")))
@interface CommonNetworkListCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

@interface CommonStation (Extensions)
- (int32_t)freeBikes __attribute__((swift_name("freeBikes()")));
- (int32_t)slots __attribute__((swift_name("slots()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface CommonActualKt : CommonBase
+ (NSString *)getApplicationFilesDirectoryPath __attribute__((swift_name("getApplicationFilesDirectoryPath()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonKotlinThrowable : CommonBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonKotlinException : CommonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonKotlinRuntimeException : CommonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonKotlinIllegalStateException : CommonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CommonKotlinCancellationException : CommonKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CommonKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CommonKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CommonKotlinx_serialization_coreKSerializer <CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonKotlinUnit : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CommonKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CommonKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CommonKotlinx_coroutines_coreSharedFlow <CommonKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CommonKotlinx_coroutines_coreStateFlow <CommonKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_db_apiKeyMaker")))
@protocol CommonKodein_db_apiKeyMaker
@required
- (CommonKodein_db_apiKey<id> *)keyType:(id<CommonKotlinKClass>)type id:(CommonKotlinArray<id> *)id __attribute__((swift_name("key(type:id:)")));
- (CommonKodein_db_apiKey<id> *)keyFromModel:(id)model options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("keyFrom(model:options:)")));
- (CommonKodein_db_apiKey<id> *)keyFromB64Type:(id<CommonKotlinKClass>)type b64:(NSString *)b64 __attribute__((swift_name("keyFromB64(type:b64:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValueMaker")))
@protocol CommonKodein_db_apiValueMaker
@required
- (id<CommonKodein_db_apiValue>)valueOfValue:(id)value __attribute__((swift_name("valueOf(value:)")));
- (id<CommonKodein_db_apiValue>)valueOfAllValues:(CommonKotlinArray<id> *)values __attribute__((swift_name("valueOfAll(values:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelWrite")))
@protocol CommonKodein_db_apiModelWrite <CommonKodein_db_apiKeyMaker, CommonKodein_db_apiValueMaker>
@required
- (void)deleteType:(id<CommonKotlinKClass>)type key:(CommonKodein_db_apiKey<id> *)key options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("delete(type:key:options:)")));
- (CommonKodein_db_apiKeyAndSize<id> *)putModel:(id)model options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(model:options:)")));
- (int32_t)putKey:(CommonKodein_db_apiKey<id> *)key model:(id)model options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("put(key:model:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelRead")))
@protocol CommonKodein_db_apiModelRead <CommonKodein_db_apiKeyMaker, CommonKodein_db_apiValueMaker>
@required
- (id<CommonKodein_db_apiModelCursor>)findAllOptions:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAll(options:)")));
- (id<CommonKodein_db_apiModelCursor>)findAllByIndexType:(id<CommonKotlinKClass>)type index:(NSString *)index options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByIndex(type:index:options:)")));
- (id<CommonKodein_db_apiModelCursor>)findAllByTypeType:(id<CommonKotlinKClass>)type options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findAllByType(type:options:)")));
- (id<CommonKodein_db_apiModelCursor>)findByIdType:(id<CommonKotlinKClass>)type id:(id)id isOpen:(BOOL)isOpen options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findById(type:id:isOpen:options:)")));
- (id<CommonKodein_db_apiModelCursor>)findByIndexType:(id<CommonKotlinKClass>)type index:(NSString *)index value:(id)value isOpen:(BOOL)isOpen options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("findByIndex(type:index:value:isOpen:options:)")));
- (id<CommonKodein_db_apiSized> _Nullable)getType:(id<CommonKotlinKClass>)type key:(CommonKodein_db_apiKey<id> *)key options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("get(type:key:options:)")));
- (NSSet<NSString *> *)getIndexesOfKey:(CommonKodein_db_apiKey<id> *)key options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("getIndexesOf(key:options:)")));
@end;

__attribute__((swift_name("Kodein_memoryCloseable")))
@protocol CommonKodein_memoryCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelDB")))
@protocol CommonKodein_db_apiModelDB <CommonKodein_db_apiModelWrite, CommonKodein_db_apiModelRead, CommonKodein_memoryCloseable>
@required
- (id<CommonKodein_db_apiModelBatch>)doNewBatch __attribute__((swift_name("doNewBatch()")));
- (id<CommonKodein_db_apiModelSnapshot>)doNewSnapshotOptions:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("doNewSnapshot(options:)")));
- (id<CommonKodein_memoryCloseable>)registerListener:(id<CommonKodein_db_apiDBListener>)listener __attribute__((swift_name("register(listener:)")));
@end;

__attribute__((swift_name("Kodein_db_apiOptions")))
@protocol CommonKodein_db_apiOptions
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsWrite")))
@protocol CommonKodein_db_apiOptionsWrite <CommonKodein_db_apiOptions>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonKotlinArray<T> : CommonBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CommonKotlinx_serialization_coreEncoder
@required
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CommonKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CommonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CommonKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CommonKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CommonKotlinx_serialization_coreDecoder
@required
- (id<CommonKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CommonKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelBatch")))
@protocol CommonKodein_db_apiModelBatch <CommonKodein_db_apiModelWrite, CommonKodein_memoryCloseable>
@required
- (void)writeAfterErrors:(CommonKodein_memoryMaybeThrowable *)afterErrors options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("write(afterErrors:options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiModelSnapshot")))
@protocol CommonKodein_db_apiModelSnapshot <CommonKodein_db_apiModelRead, CommonKodein_memoryCloseable>
@required
@end;

__attribute__((swift_name("Kodein_db_apiOptionsRead")))
@protocol CommonKodein_db_apiOptionsRead <CommonKodein_db_apiOptions>
@required
@end;

__attribute__((swift_name("Kodein_db_apiDBListener")))
@protocol CommonKodein_db_apiDBListener
@required
- (void)didDeleteKey:(CommonKodein_db_apiKey<id> *)key model:(id _Nullable)model typeName:(id<CommonKodein_memoryReadMemory>)typeName options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didDelete(key:model:typeName:options:)")));
- (void)didPutModel:(id)model key:(CommonKodein_db_apiKey<id> *)key typeName:(id<CommonKodein_memoryReadMemory>)typeName metadata:(id<CommonKodein_db_apiMetadata>)metadata size:(int32_t)size options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("didPut(model:key:typeName:metadata:size:options:)")));
- (void)setSubscriptionSubscription:(id<CommonKodein_memoryCloseable>)subscription __attribute__((swift_name("setSubscription(subscription:)")));
- (void)willDeleteKey:(CommonKodein_db_apiKey<id> *)key getModel:(id _Nullable (^)(void))getModel typeName:(id<CommonKodein_memoryReadMemory>)typeName options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willDelete(key:getModel:typeName:options:)")));
- (void)willPutModel:(id)model typeName:(id<CommonKodein_memoryReadMemory>)typeName metadata:(id<CommonKodein_db_apiMetadata>)metadata options:(CommonKotlinArray<id<CommonKodein_db_apiOptionsWrite>> *)options __attribute__((swift_name("willPut(model:typeName:metadata:options:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonKotlinKClass <CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKey")))
@interface CommonKodein_db_apiKey<__covariant T> : CommonBase
- (instancetype)initWithBytes:(id<CommonKodein_memoryReadMemory>)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKodein_memoryReadMemory>)component1 __attribute__((swift_name("component1()")));
- (CommonKodein_db_apiKey<T> *)doCopyBytes:(id<CommonKodein_memoryReadMemory>)bytes __attribute__((swift_name("doCopy(bytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toBase64 __attribute__((swift_name("toBase64()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonKodein_memoryReadMemory> bytes __attribute__((swift_name("bytes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_db_apiKeyAndSize")))
@interface CommonKodein_db_apiKeyAndSize<M> : CommonBase
- (instancetype)initWithKey:(CommonKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("init(key:size:)"))) __attribute__((objc_designated_initializer));
- (CommonKodein_db_apiKey<M> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CommonKodein_db_apiKeyAndSize<M> *)doCopyKey:(CommonKodein_db_apiKey<M> *)key size:(int32_t)size __attribute__((swift_name("doCopy(key:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKodein_db_apiKey<M> *key __attribute__((swift_name("key")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBody")))
@protocol CommonKodein_db_apiBody
@required
- (void)writeIntoDst:(id<CommonKodein_memoryWriteable>)dst __attribute__((swift_name("writeInto(dst:)")));
@end;

__attribute__((swift_name("Kodein_db_apiValue")))
@protocol CommonKodein_db_apiValue <CommonKodein_db_apiBody>
@required
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_db_apiBaseCursor")))
@protocol CommonKodein_db_apiBaseCursor <CommonKodein_memoryCloseable>
@required
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (void)next __attribute__((swift_name("next()")));
- (void)prev __attribute__((swift_name("prev()")));
- (void)seekToTarget:(id<CommonKodein_memoryReadMemory>)target __attribute__((swift_name("seekTo(target:)")));
- (void)seekToFirst __attribute__((swift_name("seekToFirst()")));
- (void)seekToLast __attribute__((swift_name("seekToLast()")));
- (id<CommonKodein_memoryReadMemory>)transientSeekKey __attribute__((swift_name("transientSeekKey()")));
@end;

__attribute__((swift_name("Kodein_db_apiModelCursor")))
@protocol CommonKodein_db_apiModelCursor <CommonKodein_db_apiBaseCursor>
@required
- (id<CommonKodein_db_apiModelCursor>)duplicate __attribute__((swift_name("duplicate()")));
- (CommonKodein_db_apiKey<id> *)key __attribute__((swift_name("key()")));
- (id<CommonKodein_db_apiSized>)modelOptions:(CommonKotlinArray<id<CommonKodein_db_apiOptionsRead>> *)options __attribute__((swift_name("model(options:)")));
@end;

__attribute__((swift_name("Kodein_db_apiSized")))
@protocol CommonKodein_db_apiSized
@required
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
@property (readonly) id _Nullable model __attribute__((swift_name("model")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CommonKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CommonKotlinx_serialization_coreSerializersModule : CommonBase
- (void)dumpToCollector:(id<CommonKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CommonKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<CommonKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<CommonKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CommonKotlinx_serialization_coreSerialKind : CommonBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CommonKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonKotlinNothing : CommonBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_memoryMaybeThrowable")))
@interface CommonKodein_memoryMaybeThrowable : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addEx:(CommonKotlinThrowable * _Nullable)ex __attribute__((swift_name("add(ex:)")));
- (void)shoot __attribute__((swift_name("shoot()")));
@property (readonly) CommonKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("Kodein_memoryReadMemory")))
@protocol CommonKodein_memoryReadMemory
@required
- (id<CommonKodein_memoryReadBuffer>)duplicate __attribute__((swift_name("duplicate()")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int8_t)getByteIndex:(int32_t)index __attribute__((swift_name("getByte(index:)")));
- (void)getBytesIndex:(int32_t)index dst:(CommonKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("getBytes(index:dst:dstOffset:length:)")));
- (unichar)getCharIndex:(int32_t)index __attribute__((swift_name("getChar(index:)")));
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (int16_t)getShortIndex:(int32_t)index __attribute__((swift_name("getShort(index:)")));
- (id<CommonKodein_memoryReadMemory>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (id<CommonKodein_memoryReadBuffer>)slice __attribute__((swift_name("slice()")));
- (id<CommonKodein_memoryReadBuffer>)sliceIndex:(int32_t)index length:(int32_t)length __attribute__((swift_name("slice(index:length:)")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@end;

__attribute__((swift_name("Kodein_memoryWriteable")))
@protocol CommonKodein_memoryWriteable
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)putByteValue:(int8_t)value __attribute__((swift_name("putByte(value:)")));
- (void)putBytesSrc:(CommonKotlinByteArray *)src srcOffset:(int32_t)srcOffset length:(int32_t)length __attribute__((swift_name("putBytes(src:srcOffset:length:)")));
- (void)putBytesSrc:(id<CommonKodein_memoryReadable>)src length:(int32_t)length __attribute__((swift_name("putBytes(src:length:)")));
- (void)putCharValue:(unichar)value __attribute__((swift_name("putChar(value:)")));
- (void)putDoubleValue:(double)value __attribute__((swift_name("putDouble(value:)")));
- (void)putFloatValue:(float)value __attribute__((swift_name("putFloat(value:)")));
- (void)putIntValue:(int32_t)value __attribute__((swift_name("putInt(value:)")));
- (void)putLongValue:(int64_t)value __attribute__((swift_name("putLong(value:)")));
- (void)putShortValue:(int16_t)value __attribute__((swift_name("putShort(value:)")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CommonKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass serializer:(id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CommonKotlinKClass>)baseClass actualClass:(id<CommonKotlinKClass>)actualClass actualSerializer:(id<CommonKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CommonKotlinKClass>)baseClass defaultSerializerProvider:(id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kodein_memoryReadable")))
@protocol CommonKodein_memoryReadable
@required
- (id<CommonKodein_memoryReadable>)internalBuffer __attribute__((swift_name("internalBuffer()")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)readBytesDst:(CommonKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("readBytes(dst:dstOffset:length:)")));
- (unichar)readChar __attribute__((swift_name("readChar()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)receive __attribute__((swift_name("receive()")));
- (int32_t)receiveDst:(CommonKotlinByteArray *)dst dstOffset:(int32_t)dstOffset length:(int32_t)length __attribute__((swift_name("receive(dst:dstOffset:length:)")));
- (int32_t)skipCount:(int32_t)count __attribute__((swift_name("skip(count:)")));
- (BOOL)valid __attribute__((swift_name("valid()")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@end;

__attribute__((swift_name("Kodein_memoryReadBuffer")))
@protocol CommonKodein_memoryReadBuffer <CommonKodein_memoryReadable, CommonKodein_memoryReadMemory>
@required
@property int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonKotlinByteArray : CommonBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonByte *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonKotlinByteIterator : CommonBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
