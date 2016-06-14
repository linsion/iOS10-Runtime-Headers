/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventCollector : NSObject {
    <HDWorkoutEventCollectorDelegate> * _delegate;
    NSUUID * _sessionId;
}

@property (readonly) <HDWorkoutEventCollectorDelegate> *delegate;
@property (readonly) NSUUID *sessionId;

+ (bool)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)sessionId;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

@end