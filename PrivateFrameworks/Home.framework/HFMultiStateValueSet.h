/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMultiStateValueSet : NSObject <NSCopying> {
    NSMutableDictionary * _displayResultsByValue;
    id /* block */  _valueComparator;
}

@property (nonatomic, readonly) NSSet *allValues;
@property (nonatomic, readonly) NSMutableDictionary *displayResultsByValue;
@property (nonatomic, readonly) NSArray *sortedValues;
@property (nonatomic, copy) id /* block */ valueComparator;

- (void).cxx_destruct;
- (void)addValue:(id)arg1 withDisplayResults:(id)arg2;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayResultsByValue;
- (id)displayResultsForValue:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)removeValue:(id)arg1;
- (void)setValueComparator:(id /* block */)arg1;
- (id)sortedValues;
- (id /* block */)valueComparator;

@end
