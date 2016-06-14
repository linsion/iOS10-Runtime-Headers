/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollection : PBCodable <NSCopying> {
    int  _cellWifi;
    NSString * _countryCode;
    int  _geoService;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int requestErrorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int cellWifi : 1; 
        unsigned int geoService : 1; 
        unsigned int placeRequestType : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
        unsigned int sessionIDIsPersistent : 1; 
    }  _has;
    NSString * _hwMachine;
    int  _placeRequestType;
    int  _requestDataSize;
    long long  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    int  _responseDataSize;
    int  _responseTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    bool  _sessionIDIsPersistent;
    struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _tileUsages;
    unsigned long long  _tileUsagesCount;
    unsigned long long  _tileUsagesSpace;
    double  _timestamp;
}

@property (nonatomic) int cellWifi;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) int geoService;
@property (nonatomic) bool hasCellWifi;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasGeoService;
@property (nonatomic, readonly) bool hasHwMachine;
@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic) bool hasRequestDataSize;
@property (nonatomic) bool hasRequestErrorCode;
@property (nonatomic, readonly) bool hasRequestErrorDescription;
@property (nonatomic, readonly) bool hasRequestErrorDomain;
@property (nonatomic) bool hasResponseDataSize;
@property (nonatomic) bool hasResponseTime;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSessionIDIsPersistent;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *hwMachine;
@property (nonatomic) int placeRequestType;
@property (nonatomic) int requestDataSize;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDescription;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) int responseDataSize;
@property (nonatomic) int responseTime;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) bool sessionIDIsPersistent;
@property (nonatomic, readonly) struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*tileUsages;
@property (nonatomic, readonly) unsigned long long tileUsagesCount;
@property (nonatomic) double timestamp;

- (int)StringAsCellWifi:(id)arg1;
- (int)StringAsGeoService:(id)arg1;
- (int)StringAsPlaceRequestType:(id)arg1;
- (void)addTileUsage:(struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (int)cellWifi;
- (id)cellWifiAsString:(int)arg1;
- (void)clearTileUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)geoService;
- (id)geoServiceAsString:(int)arg1;
- (bool)hasCellWifi;
- (bool)hasCountryCode;
- (bool)hasGeoService;
- (bool)hasHwMachine;
- (bool)hasPlaceRequestType;
- (bool)hasRequestDataSize;
- (bool)hasRequestErrorCode;
- (bool)hasRequestErrorDescription;
- (bool)hasRequestErrorDomain;
- (bool)hasResponseDataSize;
- (bool)hasResponseTime;
- (bool)hasSessionID;
- (bool)hasSessionIDIsPersistent;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hwMachine;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestDataSize;
- (long long)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (int)responseDataSize;
- (int)responseTime;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (bool)sessionIDIsPersistent;
- (void)setCellWifi:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setGeoService:(int)arg1;
- (void)setHasCellWifi:(bool)arg1;
- (void)setHasGeoService:(bool)arg1;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setHasRequestDataSize:(bool)arg1;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setHasResponseDataSize:(bool)arg1;
- (void)setHasResponseTime:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionIDIsPersistent:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestErrorCode:(long long)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionIDIsPersistent:(bool)arg1;
- (void)setTileUsages:(struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(double)arg1;
- (struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })tileUsageAtIndex:(unsigned long long)arg1;
- (struct GEOTileUsage { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)tileUsages;
- (unsigned long long)tileUsagesCount;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end