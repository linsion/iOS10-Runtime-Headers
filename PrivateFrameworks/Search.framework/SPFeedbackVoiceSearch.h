/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackVoiceSearch : SPFeedback {
    double  _dictationStartTime;
    NSString * _dictationStopReason;
    double  _dictationStopTime;
    double  _doneButtonTime;
    NSDictionary * _headers;
    double  _micButtonStartTime;
    double  _micButtonStopTime;
    NSMutableArray * _mutableSpeechResults;
    double  _speechDetectedTime;
    NSArray * _speechResults;
    NSString * _voiceIdentifier;
}

@property (nonatomic) double dictationStartTime;
@property (nonatomic, retain) NSString *dictationStopReason;
@property (nonatomic) double dictationStopTime;
@property (nonatomic) double doneButtonTime;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic) double micButtonStartTime;
@property (nonatomic) double micButtonStopTime;
@property (nonatomic) double speechDetectedTime;
@property (nonatomic, retain) NSArray *speechResults;
@property (nonatomic, retain) NSString *voiceIdentifier;

+ (id)feedback;

- (void).cxx_destruct;
- (void)addSpeechResult:(id)arg1 stable:(bool)arg2 timestamp:(double)arg3 webResultsSize:(unsigned long long)arg4 spotlightResultsSize:(unsigned long long)arg5;
- (double)dictationStartTime;
- (id)dictationStopReason;
- (double)dictationStopTime;
- (void)dictationStoppedReason:(id)arg1;
- (void)dictationStoppedReason:(id)arg1 timestamp:(double)arg2;
- (double)doneButtonTime;
- (void)encodeWithCoder:(id)arg1;
- (id)headers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)micButtonStartTime;
- (double)micButtonStopTime;
- (void)setDictationStartTime:(double)arg1;
- (void)setDictationStopReason:(id)arg1;
- (void)setDictationStopTime:(double)arg1;
- (void)setDoneButtonTime:(double)arg1;
- (void)setHeaders:(id)arg1;
- (void)setMicButtonStartTime:(double)arg1;
- (void)setMicButtonStopTime:(double)arg1;
- (void)setSpeechDetectedTime:(double)arg1;
- (void)setSpeechResults:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (double)speechDetectedTime;
- (id)speechResults;
- (id)voiceIdentifier;

@end