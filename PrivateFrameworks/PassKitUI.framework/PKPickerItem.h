/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPickerItem : NSObject {
    id /* block */  _pushHandler;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ pushHandler;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithTitle:(id)arg1 pushHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)pushHandler;
- (void)setPushHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
