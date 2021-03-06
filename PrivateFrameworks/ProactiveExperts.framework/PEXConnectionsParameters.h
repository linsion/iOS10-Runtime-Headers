/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsParameters : NSObject {
    NSDictionary * _assets;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)appSwitcherPredictionExpiry;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (id)donationBlacklistApps;
- (long long)expirySeconds;
- (double)geocodeTimeoutSeconds;
- (id)init;
- (double)linguisticTriggerExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)locationPredictionBlacklistApps;
- (double)pasteboardItemExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (double)spotlightUserActionExpirySeconds;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (double)userActivityExpirySeconds;

@end
