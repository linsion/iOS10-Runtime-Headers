/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsMessageInviteRequest : PBRequest <NSCopying> {
    NSString * _handshakeToken;
    NSString * _inviterCloudKitAddress;
}

@property (nonatomic, retain) NSString *handshakeToken;
@property (nonatomic, readonly) bool hasHandshakeToken;
@property (nonatomic, readonly) bool hasInviterCloudKitAddress;
@property (nonatomic, retain) NSString *inviterCloudKitAddress;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handshakeToken;
- (bool)hasHandshakeToken;
- (bool)hasInviterCloudKitAddress;
- (unsigned long long)hash;
- (id)inviterCloudKitAddress;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHandshakeToken:(id)arg1;
- (void)setInviterCloudKitAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end