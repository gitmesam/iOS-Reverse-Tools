//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSString;

@interface IphoneGPSMan : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *m_locationManager;
    CLLocation *m_bestEffortAtLocation;
    int m_bGotLocation;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLLocation *bestEffortAtLocation; // @synthesize bestEffortAtLocation=m_bestEffortAtLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=m_locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (_Bool)compassAvailable;
- (void)stopUpdatingLocation;
- (void)onLocationTimer;
- (void)startUpdatingLocation;
- (void)dealloc;
- (_Bool)getLastLocation:(struct CVGpsDetailInfo *)arg1;
- (_Bool)unInitializeHeading;
- (_Bool)initializeHeading;
- (_Bool)unInitializeLocation;
- (_Bool)initializeLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

