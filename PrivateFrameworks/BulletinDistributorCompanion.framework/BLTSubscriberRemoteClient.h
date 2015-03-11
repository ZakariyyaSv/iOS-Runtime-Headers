/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)sectionIDsForPings;
- (void)setConnection:(id)arg1;

@end