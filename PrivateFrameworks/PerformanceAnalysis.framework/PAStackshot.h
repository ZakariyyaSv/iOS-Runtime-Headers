/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshot : NSObject {
    double _machTimestamp;
    PAMicrostackshotData *_microstackshotData;
    NSData *_traceBufData;
    double _wallTimestamp;
}

@property (readonly) BOOL isMicrostackshot;
@property (readonly) double machTimestamp;
@property (readonly) PAMicrostackshotData *microstackshotData;
@property (readonly) double wallTimestamp;

- (void)dealloc;
- (id)initWithGlobalTrace;
- (id)initWithPid:(int)arg1;
- (id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3;
- (BOOL)isMicrostackshot;
- (void)iterateTasks:(id /* block */)arg1;
- (double)machTimestamp;
- (id)microstackshotData;
- (double)wallTimestamp;

@end
