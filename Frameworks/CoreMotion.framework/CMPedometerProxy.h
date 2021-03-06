/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerProxy : NSObject {
    double  fActiveTimeFromStart;
    double  fActiveTimeOffset;
    NSObject<OS_dispatch_queue> * fAppQueue;
    double  fDistanceFromStart;
    double  fDistanceOffset;
    id /* block */  fEventHandler;
    int  fFloorAscendedOffset;
    int  fFloorAscendedStart;
    BOOL  fFloorCountingAvailable;
    int  fFloorDescendedOffset;
    int  fFloorDescendedStart;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    BOOL  fPaceAndCadenceAvailable;
    int  fPushCountFromStart;
    int  fPushCountOffset;
    int  fStepCountFromStart;
    int  fStepCountOffset;
    BOOL  fStopEventUpdates;
    BOOL  fStopUpdates;
    double  fValidStartDate;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    int  fWorkoutType;
}

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_handleRecordQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withHandler:(id /* block */)arg2;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startPedometerEventUpdatesWithHandler:(id /* block */)arg1;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopPedometerEventUpdates;
- (void)_stopPedometerUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
