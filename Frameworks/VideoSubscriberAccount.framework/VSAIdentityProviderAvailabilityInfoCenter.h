/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAIdentityProviderAvailabilityInfoCenter : NSObject {
    VSAStoreURLBag * _bag;
    VSADevice * _device;
    long long  _status;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) VSAStoreURLBag *bag;
@property (nonatomic, retain) VSADevice *device;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)_accountStoreChanged:(id)arg1;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(id /* block */)arg1;
- (bool)_isFeatureEnabled;
- (void)_sendStatusChangeNotification;
- (id)bag;
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)device;
- (id)init;
- (id)initWithBag:(id)arg1 device:(id)arg2 userDefaults:(id)arg3;
- (void)setBag:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (long long)status;
- (id)userDefaults;

@end