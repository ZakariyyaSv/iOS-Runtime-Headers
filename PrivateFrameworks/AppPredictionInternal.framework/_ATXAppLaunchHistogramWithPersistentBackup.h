/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram {
    _ATXDataStore *_datastore;
    int _histogramType;
    BOOL _saveInBackground;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSObject<OS_dispatch_source> *_saveTimer;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) int histogramType;
@property (nonatomic) BOOL saveInBackground;

- (void).cxx_destruct;
- (void)_cancelSaveTimer;
- (void)_scheduleSave;
- (void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
- (id)datastore;
- (void)dealloc;
- (void)flush;
- (int)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2 andSaveInBackground:(BOOL)arg3;
- (void)receivedDataStoreResetNotification:(id)arg1;
- (void)registerForRestoreNotificationsFrom:(id)arg1;
- (BOOL)removeAllHistoryForBundleId:(id)arg1;
- (void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
- (void)resetData;
- (BOOL)saveInBackground;
- (void)setSaveInBackground:(BOOL)arg1;
- (void)unregisterFromRestoreNotificationsFrom:(id)arg1;

@end
