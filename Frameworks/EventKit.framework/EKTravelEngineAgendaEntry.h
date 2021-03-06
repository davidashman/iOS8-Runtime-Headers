/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKTravelAdvisor, EKTravelAgendaItem;

@interface EKTravelEngineAgendaEntry : NSObject  {
    bool_dismissed;
    NSString *_eventExternalURL;
    EKTravelAgendaItem *_agendaItem;
    EKTravelAdvisor *_advisor;
}

@property(retain) NSString * eventExternalURL;
@property(retain) EKTravelAgendaItem * agendaItem;
@property bool dismissed;
@property(retain) EKTravelAdvisor * advisor;


- (void)setAdvisor:(id)arg1;
- (id)eventExternalURL;
- (void)setEventExternalURL:(id)arg1;
- (id)advisor;
- (void)setDismissed:(bool)arg1;
- (void)setAgendaItem:(id)arg1;
- (id)agendaItem;
- (id)init;
- (void)dealloc;
- (id)description;
- (bool)dismissed;

@end
