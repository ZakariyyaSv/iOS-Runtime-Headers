/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {
    void *_currentNetwork;
    NSHashTable *_delegateMap;
    void *_dynamicStore;
    BOOL _isHostingHotSpot;
    BOOL _isPrimaryCellularCached;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWifiEnabled;
    NSDictionary *_lastWiFiPowerInfo;
    int _linkToken;
    NSRecursiveLock *_lock;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSObject<OS_dispatch_queue> *_scUpdateQueue;
    BOOL _shouldAutoAssociateAsForeground;
    NSMutableSet *_wiFiAutoAssociationTokens;
    void *_wifiDevice;
    void *_wifiManager;
    NSRunLoop *_wifiRunLoop;
    NSThread *_wifiThread;
    NSHashTable *_wowClients;
}

@property (nonatomic, readonly) BOOL autoAssociateWiFi;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient;
@property (nonatomic) void*currentNetwork;
@property (nonatomic, readonly, retain) NSString *currentSSID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegateMap;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*dynamicStore;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isHostingWiFiHotSpot;
@property BOOL isPrimaryCellularCached;
@property (nonatomic, readonly) BOOL isWiFiAssociated;
@property (nonatomic, readonly) BOOL isWiFiCaptive;
@property (nonatomic, readonly) BOOL isWiFiEnabled;
@property (nonatomic, readonly) BOOL isWoWEnabled;
@property (nonatomic, readonly) BOOL isWoWSupported;
@property (nonatomic, copy) NSDictionary *lastWiFiPowerInfo;
@property (nonatomic) int linkToken;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSource;
@property (nonatomic) NSObject<OS_dispatch_queue> *scUpdateQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *wiFiAutoAssociationTokens;
@property (nonatomic, readonly, retain) NSNumber *wiFiScaledRSSI;
@property (nonatomic, readonly, retain) NSNumber *wiFiScaledRate;
@property (nonatomic, readonly, retain) NSNumber *wiFiSignalStrength;
@property (nonatomic) void*wifiDevice;
@property (nonatomic) void*wifiManager;
@property (nonatomic, retain) NSRunLoop *wifiRunLoop;
@property (nonatomic, retain) NSThread *wifiThread;
@property (nonatomic, readonly) BOOL willTryToAutoAssociateWiFiNetwork;
@property (nonatomic, readonly) BOOL willTryToSearchForWiFiNetwork;
@property (nonatomic, retain) NSHashTable *wowClients;

+ (id)sharedInstance;

- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWoWState;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)_handleDeviceAttachedCallback;
- (void)_handleDevicePowerCallback;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient { }*)arg1;
- (BOOL)_isPrimaryCellular;
- (void)_performBackgroundInit;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2 async:(BOOL)arg3;
- (void)_performDeviceBlock:(id /* block */)arg1;
- (void)_performDeviceBlock:(id /* block */)arg1 useCache:(BOOL)arg2;
- (void)_performPowerReading;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (id)_ssidFromNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_threadedMain;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)arg1;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)addDelegate:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (BOOL)autoAssociateWiFi;
- (BOOL)autoAssociateWiFiAsForegroundClient;
- (void*)currentNetwork;
- (id)currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegateMap;
- (void*)dynamicStore;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)hasWoWClient:(id)arg1;
- (id)init;
- (BOOL)isHostingWiFiHotSpot;
- (BOOL)isPrimaryCellularCached;
- (BOOL)isWiFiAssociated;
- (BOOL)isWiFiCaptive;
- (BOOL)isWiFiEnabled;
- (BOOL)isWoWEnabled;
- (BOOL)isWoWSupported;
- (id)lastWiFiPowerInfo;
- (int)linkToken;
- (id)lock;
- (void)removeDelegate:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (id)scUpdateQueue;
- (void)setAutoAssociateWiFiAsForegroundClient:(BOOL)arg1;
- (void)setCurrentNetwork:(void*)arg1;
- (void)setDelegateMap:(id)arg1;
- (void)setDynamicStore:(void*)arg1;
- (void)setIsPrimaryCellularCached:(BOOL)arg1;
- (void)setLastWiFiPowerInfo:(id)arg1;
- (void)setLinkToken:(int)arg1;
- (void)setLock:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setScUpdateQueue:(id)arg1;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (void)setWifiDevice:(void*)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)setWifiRunLoop:(id)arg1;
- (void)setWifiThread:(id)arg1;
- (void)setWowClients:(id)arg1;
- (void)showNetworkOptions;
- (id)wiFiAutoAssociationTokens;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (void*)wifiDevice;
- (void*)wifiManager;
- (id)wifiRunLoop;
- (id)wifiThread;
- (BOOL)willTryToAutoAssociateWiFiNetwork;
- (BOOL)willTryToSearchForWiFiNetwork;
- (id)wowClients;

@end
