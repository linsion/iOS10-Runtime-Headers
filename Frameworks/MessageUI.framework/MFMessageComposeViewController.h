/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageComposeViewController : UINavigationController {
    NSArray * _attachments;
    NSString * _body;
    unsigned long long  _currentAttachedAudioCount;
    unsigned long long  _currentAttachedImageCount;
    unsigned long long  _currentAttachedVideoCount;
    <MFMessageComposeViewControllerDelegate> * _messageComposeDelegate;
    NSMutableArray * _mutableAttachmentURLs;
    NSArray * _recipients;
    NSString * _subject;
}

@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) unsigned long long currentAttachedAudioCount;
@property (nonatomic) unsigned long long currentAttachedImageCount;
@property (nonatomic) unsigned long long currentAttachedVideoCount;
@property (nonatomic) <MFMessageComposeViewControllerDelegate> *messageComposeDelegate;
@property (nonatomic, copy) NSMutableArray *mutableAttachmentURLs;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *subject;

+ (bool)_canSendText;
+ (id)_chatKitBundle;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_setupAccountMonitor;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)_updateServiceAvailability;
+ (bool)canSendAttachments;
+ (bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (bool)canSendSubject;
+ (bool)canSendText;
+ (void)initialize;
+ (bool)isMMSEnabled;
+ (bool)isSupportedAttachmentUTI:(id)arg1;
+ (bool)isiMessageEnabled;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (id)_MIMETypeForURL:(id)arg1;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (id)_contentTypeForMIMEType:(id)arg1;
- (bool)_isAudioMIMEType:(id)arg1;
- (bool)_isImageMIMEType:(id)arg1;
- (bool)_isVideoMIMEType:(id)arg1;
- (void)_setCanEditRecipients:(bool)arg1;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (bool)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (bool)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (bool)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
- (bool)addRichLinkData:(id)arg1 withWebpageURL:(id)arg2;
- (id)attachmentURLs;
- (id)attachments;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)body;
- (bool)canAddAttachmentURL:(id)arg1;
- (unsigned long long)currentAttachedAudioCount;
- (unsigned long long)currentAttachedImageCount;
- (unsigned long long)currentAttachedVideoCount;
- (void)dealloc;
- (void)disableUserAttachments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)messageComposeDelegate;
- (id)mutableAttachmentURLs;
- (id)recipients;
- (void)setBody:(id)arg1;
- (void)setCurrentAttachedAudioCount:(unsigned long long)arg1;
- (void)setCurrentAttachedImageCount:(unsigned long long)arg1;
- (void)setCurrentAttachedVideoCount:(unsigned long long)arg1;
- (void)setMessageComposeDelegate:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setMutableAttachmentURLs:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(id /* block */)arg3;
- (id)subject;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
