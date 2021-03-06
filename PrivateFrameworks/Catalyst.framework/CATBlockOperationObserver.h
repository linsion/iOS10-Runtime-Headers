/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATBlockOperationObserver : NSObject <CATOperationObserver> {
    id /* block */  _didFinish;
    id /* block */  _didProgress;
    id /* block */  _didStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinish;
@property (nonatomic, copy) id /* block */ didProgress;
@property (nonatomic, copy) id /* block */ didStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)didFinish;
- (id /* block */)didProgress;
- (id /* block */)didStart;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)setDidFinish:(id /* block */)arg1;
- (void)setDidProgress:(id /* block */)arg1;
- (void)setDidStart:(id /* block */)arg1;

@end
