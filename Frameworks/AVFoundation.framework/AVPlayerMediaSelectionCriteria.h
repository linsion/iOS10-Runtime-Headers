/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteria : NSObject {
    AVPlayerMediaSelectionCriteriaInternal * _criteria;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *preferredMediaCharacteristics;

- (id)_initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(bool)arg5 precludeMultichannelAudio:(bool)arg6;
- (void)dealloc;
- (id)description;
- (id)figDictionary;
- (id)init;
- (id)initWithFigDictionary:(id)arg1;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(bool)arg5 precludeMultichannelAudio:(bool)arg6;
- (bool)precludeMultichannelAudio;
- (id)precludedMediaSubTypes;
- (bool)preferMultichannelAudio;
- (id)preferredLanguages;
- (id)preferredMediaCharacteristics;
- (id)preferredMediaSubTypes;

@end