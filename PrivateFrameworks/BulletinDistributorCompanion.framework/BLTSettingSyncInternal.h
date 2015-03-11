/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BBObserver, BBSettingsGateway, BLTSectionConfiguration, BLTSettingSyncServer, NPSManager, NSString;

@interface BLTSettingSyncInternal : NSObject <MCProfileConnectionObserver, BLTSettingSyncing> {
    BLTSettingSyncServer *_connection;
    long long _dndStatus;
    NPSManager *_npsManager;
    BBObserver *_observer;
    BLTSectionConfiguration *_sectionConfiguration;
    BBSettingsGateway *_settingsGateway;
    bool_dndEnabled;
    bool_dndStateUpdatedAtLeastOnce;
    bool_isDNDMirrorEnabled;
    bool_isWristDetectDisabled;
}

@property(retain) BLTSettingSyncServer * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isDNDMirrorEnabled;
@property(readonly) bool isWristDetectDisabled;
@property(retain) NPSManager * npsManager;
@property(retain) BBObserver * observer;
@property(retain) BBSettingsGateway * settingsGateway;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isWristDetectionDisabled;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_updateWristDetectSetting;
- (bool)_wristDetectionDisabledPreference;
- (bool)_wristDetectionEnabledRestriction;
- (id)connection;
- (void)dealloc;
- (unsigned long long)getSettingsWillPresentBlockedByReasonForSectionInfo:(id)arg1;
- (id)init;
- (bool)isDNDMirrorEnabled;
- (bool)isWristDetectDisabled;
- (id)npsManager;
- (id)observer;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeDNDHandlers;
- (void)setBehaviorOverrideStatus:(long long)arg1;
- (void)setBehaviorOverrideTypes:(unsigned long long)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDNDHandlers;
- (void)setDoNotDisturb:(bool)arg1 updateSettings:(bool)arg2;
- (void)setIsDNDMirrorEnabled:(bool)arg1;
- (void)setNpsManager:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;
- (void)updateDNDMirrorState;
- (void)updateDNDState;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2;

@end