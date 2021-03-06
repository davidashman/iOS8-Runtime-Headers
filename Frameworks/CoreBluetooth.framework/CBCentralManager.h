/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSMapTable, CBPairingAgent, <CBCentralManagerDelegate>, NSString, CBXpcConnection;

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    <CBCentralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didRetrievePeripherals : 1; 
        unsigned int didRetrieveConnectedPeripherals : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
    } _delegateFlags;
    long long _state;
    bool_isScanning;
    NSMapTable *_peripherals;
    CBXpcConnection *_connection;
    bool_connectionIsFinalized;
    CBPairingAgent *_pairingAgent;
}

@property <CBCentralManagerDelegate> * delegate;
@property long long state;
@property(readonly) CBPairingAgent * sharedPairingAgent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)sharedPairingAgent;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionIsInvalid:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (id)peerWithIdentifier:(id)arg1 dict:(id)arg2;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(bool)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(bool)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (void)orphanPeripherals;
- (void)forEachPeripheral:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1 dict:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (bool)sendMsg:(int)arg1 args:(id)arg2;
- (bool)isMsgAllowedAlways:(int)arg1;
- (bool)isMsgAllowedWhenOff:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (oneway void)release;

@end
