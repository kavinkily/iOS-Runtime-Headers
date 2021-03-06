/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}

@property (getter=isConnected, nonatomic, readonly) BOOL connected;
@property (nonatomic, readonly) unsigned int connectionID;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property (nonatomic, readonly) NSString *dockType;
@property (nonatomic, readonly) NSString *firmwareRevision;
@property (nonatomic, readonly) NSString *hardwareRevision;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelNumber;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *protocolStrings;
@property (nonatomic, readonly) NSString *serialNumber;

- (void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg1 forAccessoryWithMACAddress:(id)arg2;
- (void)_addSession:(id)arg1;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)_internalConnectionID;
- (BOOL)_internalNotPresentInIAPAccessoriesArray;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_removeSession:(id)arg1;
- (void)_setConnected:(BOOL)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (unsigned int)accessoryCapabilities;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (void)beginOOBBTPairingWithCompletionBlock:(id /* block */)arg1;
- (id)bonjourName;
- (id)cameraComponents;
- (int)captureStillImage:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)classType;
- (unsigned int)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dockType;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)getNMEASentence:(id*)arg1;
- (id)getVehicleInfoData;
- (id)hardwareRevision;
- (BOOL)hasIPConnection;
- (id)init;
- (BOOL)isAvailableOverBonjour;
- (BOOL)isConnected;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (BOOL)pointOfInterestHandoffEnabled;
- (id)preferredApp;
- (id)protocolStrings;
- (void)requestIAPAccessoryWiFiCredentials;
- (void)resetIAPTimeSyncKalmanFilter;
- (BOOL)sendDestinationInformation:(id)arg1 identifier:(id)arg2;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGPRMCDataStatusValueA:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (BOOL)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2;
- (id)serialNumber;
- (void)setCameraComponents:(id)arg1;
- (int)setCameraProperties:(unsigned int)arg1 forCameraId:(unsigned short)arg2 withProperties:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setIAPTimeSyncParams:(id)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;
- (BOOL)shouldBeHiddenFromUI;
- (int)startCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)startCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2 withProperties:(id)arg3 withCapabilities:(id)arg4;
- (int)startLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (BOOL)supportsAccessibility;
- (BOOL)supportsCamera;
- (BOOL)supportsCarPlay;
- (BOOL)supportsLocation;
- (BOOL)supportsOOBBTPairing;
- (BOOL)supportsPointOfInterest;
- (BOOL)supportsPublicIap;
- (BOOL)supportsUSBCarPlay;
- (BOOL)supportsWirelessCarPlay;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;
- (id)wakeToken;

@end
