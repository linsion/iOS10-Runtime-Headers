/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperSettings : _UISettings {
    long long  _blurReplacementMode;
    unsigned long long  _colorBoxSize;
    double  _mediumBlurRadius;
    double  _mediumGrayscaleTintAlpha;
    double  _mediumGrayscaleTintLevel;
    double  _mediumSaturationDeltaFactor;
    bool  _replaceBlurs;
}

@property (nonatomic) long long blurReplacementMode;
@property (nonatomic) unsigned long long colorBoxSize;
@property (nonatomic) double mediumBlurRadius;
@property (nonatomic) double mediumGrayscaleTintAlpha;
@property (nonatomic) double mediumGrayscaleTintLevel;
@property (nonatomic) double mediumSaturationDeltaFactor;
@property (nonatomic) bool replaceBlurs;

+ (id)settingsControllerModule;

- (long long)blurReplacementMode;
- (unsigned long long)colorBoxSize;
- (double)mediumBlurRadius;
- (double)mediumGrayscaleTintAlpha;
- (double)mediumGrayscaleTintLevel;
- (double)mediumSaturationDeltaFactor;
- (bool)replaceBlurs;
- (void)setBlurReplacementMode:(long long)arg1;
- (void)setColorBoxSize:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setMediumBlurRadius:(double)arg1;
- (void)setMediumGrayscaleTintAlpha:(double)arg1;
- (void)setMediumGrayscaleTintLevel:(double)arg1;
- (void)setMediumSaturationDeltaFactor:(double)arg1;
- (void)setReplaceBlurs:(bool)arg1;

@end