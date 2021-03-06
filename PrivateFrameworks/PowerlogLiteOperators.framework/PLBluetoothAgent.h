/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBluetoothAgent : PLAgent {
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    PLXPCListenerOperatorComposition * _btHCIListener;
    NSString * _btHardwareChipset;
    PLXPCListenerOperatorComposition * _leConnectionListener;
    unsigned char  _logCount;
    PLEntryNotificationOperatorComposition * _sbcChanged;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
    BOOL  keepSessionAlive;
    struct BTLocalDeviceImpl { } * localBluetoothDevice;
    struct BTSessionImpl { } * session;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *btHCIListener;
@property (readonly) NSString *btHardwareChipset;
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener;
@property unsigned char logCount;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (void)attachSession;
- (id)batteryLevelChanged;
- (void)bluetoothDeviceEvent:(int)arg1 onDevice:(struct BTLocalDeviceImpl { }*)arg2 withResult:(int)arg3;
- (BOOL)bluetoothPresent;
- (void)bluetoothSessionEvent:(int)arg1 onSession:(struct BTSessionImpl { }*)arg2 withResult:(int)arg3;
- (id)btHCIListener;
- (id)btHardwareChipset;
- (id)btHardwareChipsetQuery;
- (void)dealloc;
- (id)init;
- (void)initOperatorDependancies;
- (BOOL)isConnectable;
- (BOOL)isConnected;
- (BOOL)isDiscoverable;
- (id)leConnectionListener;
- (struct BTLocalDeviceImpl { }*)localBluetoothDevice;
- (void)log;
- (unsigned char)logCount;
- (void)logEventBackwardClientScan;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventForwardDeviceState;
- (void)logEventForwardPairedDevices;
- (void)logEventIntervalConnectedDevices;
- (void)logEventIntervalHCIRawData:(id)arg1;
- (void)logEventIntervalLeConnectedDevices:(id)arg1 withRequest:(BOOL)arg2;
- (void)logwithBTOnCheck;
- (void)modelBluetoothOffPower;
- (void)modelBluetoothPower:(id)arg1;
- (BOOL)modulePowered;
- (id)sbcChanged;
- (void)sessionAttached:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)sessionTerminated:(struct BTSessionImpl { }*)arg1 withResult:(int)arg2;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setBtHCIListener:(id)arg1;
- (void)setLeConnectionListener:(id)arg1;
- (void)setLogCount:(unsigned char)arg1;
- (void)setSbcChanged:(id)arg1;
- (id)wakeEntryNotifications;

@end
