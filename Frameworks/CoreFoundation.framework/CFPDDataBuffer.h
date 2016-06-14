/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { }*)arg1;
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(bool)arg2;
+ (id)newBufferFromPropertyList:(void*)arg1;

- (bool)beginAccessing;
- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (void*)copyPropertyListWithMutability:(unsigned long long)arg1;
- (id)copyXPCData;
- (void)endAccessing;
- (unsigned long long)length;
- (bool)purgable;
- (bool)validatePlist;

@end