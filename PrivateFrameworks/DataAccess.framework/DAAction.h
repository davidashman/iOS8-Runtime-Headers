/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface DAAction : NSObject <NSCoding> {
    int _changeId;
    long long _itemChangeType;
    id _serverId;
    id _changedItem;
}

@property long long itemChangeType;
@property(retain) id serverId;
@property(retain) id changedItem;
@property int changeId;


- (id)serverId;
- (struct ASNote { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)note;
     /* Encoded args for previous method: ^{ASNote=#@@ii@i@?i@}16@0:8 */

- (id)deletedNoteID;
- (struct ASToDo { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)toDo;
     /* Encoded args for previous method: ^{ASToDo=#@@ii@i@?i@}16@0:8 */

- (id)deletedToDoID;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (int)changeId;
- (id)stringForItemChangeType:(long long)arg1;
- (long long)itemChangeType;
- (void)setChangeId:(int)arg1;
- (void)setServerId:(id)arg1;
- (void)_setChangedItem:(id)arg1;
- (void)setItemChangeType:(long long)arg1;
- (id)deletedContactID;
- (id)deletedEventID;
- (id)changedItem;
- (struct ASContact { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)contact;
     /* Encoded args for previous method: ^{ASContact=#@@ii@i@?i@}16@0:8 */

- (id)message;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (struct ASEvent { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)event;
     /* Encoded args for previous method: ^{ASEvent=#@@ii@i@?i@}16@0:8 */


@end
