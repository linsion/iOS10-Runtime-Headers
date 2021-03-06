/* Generated by RuntimeBrowser.
 */

@protocol CDPDDeviceSecretValidatorDelegate <NSObject>

@required

- (void)secretValidator:(void *)arg1 recoverSecureBackupWithContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPDDeviceSecretValidator *, CDPDSecureBackupRecoveryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (bool)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldContinueValidationAfterError:(NSError *)arg2;

@optional

- (void)secretValidator:(void *)arg1 didFailRecoveryWithErrors:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPDDeviceSecretValidator *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldAcceptRecoveryError:(id*)arg2;
- (void)secretValidatorWillAttemptRecovery;

@end
