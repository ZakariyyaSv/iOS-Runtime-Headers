/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChanges : 1; 
        unsigned int wantsChanges : 1; 
    } _has;
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
    BOOL _wantsChanges;
}

@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic, readonly) BOOL hasServerChangeToken;
@property (nonatomic) BOOL hasWantsChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic, retain) NSData *serverChangeToken;
@property (nonatomic) BOOL wantsChanges;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxChanges;
- (BOOL)hasServerChangeToken;
- (BOOL)hasWantsChanges;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverChangeToken;
- (void)setHasMaxChanges:(BOOL)arg1;
- (void)setHasWantsChanges:(BOOL)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setWantsChanges:(BOOL)arg1;
- (BOOL)wantsChanges;
- (void)writeTo:(id)arg1;

@end
