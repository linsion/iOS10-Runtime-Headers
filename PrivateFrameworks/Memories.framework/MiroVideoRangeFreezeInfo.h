/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo {
    bool  _added;
    bool  _dontUse;
    double  _duration;
    float  _gain;
    unsigned long long  _mute;
    bool  _removed;
    double  _start;
    bool  _used;
}

@property (nonatomic) bool added;
@property (nonatomic) bool dontUse;
@property (nonatomic) double duration;
@property (nonatomic) float gain;
@property (nonatomic) unsigned long long mute;
@property (nonatomic) bool removed;
@property (nonatomic) double start;
@property (nonatomic) bool used;

- (bool)added;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dontUse;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (float)gain;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mute;
- (bool)removed;
- (void)setAdded:(bool)arg1;
- (void)setDontUse:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setGain:(float)arg1;
- (void)setMute:(unsigned long long)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setStart:(double)arg1;
- (void)setUsed:(bool)arg1;
- (double)start;
- (bool)used;

@end
