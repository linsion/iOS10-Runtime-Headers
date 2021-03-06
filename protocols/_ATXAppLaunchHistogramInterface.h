/* Generated by RuntimeBrowser.
 */

@protocol _ATXAppLaunchHistogramInterface

@required

- (void)addLaunchWithBundleId:(NSString *)arg1 withDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3;
- (bool)bundleHasBeenLaunched:(NSString *)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (double)launchPopularityWithBundleId:(NSString *)arg1 date:(NSDate *)arg2;
- (double)overallLaunchPopularityForBundleId:(NSString *)arg1;
- (double)relativeLaunchPopularityWithBundleId:(NSString *)arg1 date:(NSDate *)arg2;
- (bool)removeAllHistoryForBundleId:(NSString *)arg1;
- (void)removeLaunchWithBundleId:(NSString *)arg1 withDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3;
- (void)resetData;
- (double)totalLaunches;
- (double)totalTimeOfDayLaunchesForDate:(NSDate *)arg1;
- (void)verifyDataIntegrity;

@end
