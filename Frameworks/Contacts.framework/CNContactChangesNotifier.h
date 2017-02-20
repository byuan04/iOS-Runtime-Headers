/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactChangesNotifier : NSObject {
    CNContactStore * _contactStore;
    <CNScheduler> * _downstream;
    BOOL  _observingNotification;
    CNMutableMultiDictionary * _registeredObservers;
    <CNScheduler> * _resourceLock;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) <CNScheduler> *downstream;
@property (getter=isObservingNotification, nonatomic) BOOL observingNotification;
@property (nonatomic, readonly) CNMutableMultiDictionary *registeredObservers;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

+ (id)createProxyForObserver:(id)arg1 keysToFetch:(id)arg2;
+ (id)preparedContact:(id)arg1 withStore:(id)arg2 keysToFetch:(id)arg3;
+ (id)sharedNotifier;
+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;

- (void).cxx_destruct;
- (id)contactStore;
- (void)contactStoreDidChange:(id)arg1;
- (id)downstream;
- (id)init;
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (BOOL)isObservingNotification;
- (void)registerObserver:(id)arg1 forContact:(id)arg2;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;
- (void)registerProxy:(id)arg1 identifier:(id)arg2;
- (id)registeredObservers;
- (id)resourceLock;
- (BOOL)resourceLock_removeProxiesPassingTest:(id /* block */)arg1 forIdentifier:(id)arg2;
- (void)setObservingNotification:(BOOL)arg1;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;
- (id)workQueue;
- (void)workQueue_updateObservers;
- (void)workQueue_updateObserving;

@end