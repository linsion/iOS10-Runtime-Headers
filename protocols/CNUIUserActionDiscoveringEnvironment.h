/* Generated by RuntimeBrowser.
 */

@protocol CNUIUserActionDiscoveringEnvironment <NSObject>

@required

- (<CNLSApplicationWorkspace> *)applicationWorkspace;
- (<CNTUCallProviderManager> *)callProviderManager;
- (<CNCapabilities> *)capabilities;
- (CNContactStore *)contactStore;
- (<CNUIUserActionDiscoveringEnvironment> *)copyWithContactStore:(CNContactStore *)arg1;
- (CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
- (<CNMCProfileConnection> *)profileConnection;

@end
