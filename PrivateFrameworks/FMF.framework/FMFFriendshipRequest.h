/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class FMFHandle, NSDate, NSSet, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_endDate;
    FMFHandle *_fromHandle;
    NSString *_groupId;
    NSString *_requestId;
    int _requestType;
    NSSet *_toHandles;
}

@property(retain) NSDate * endDate;
@property(retain) FMFHandle * fromHandle;
@property(retain) NSString * groupId;
@property(retain) NSString * requestId;
@property int requestType;
@property(retain) NSSet * toHandles;

+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(int)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)fromHandle;
- (id)groupId;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(int)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;
- (id)requestId;
- (int)requestType;
- (void)setEndDate:(id)arg1;
- (void)setFromHandle:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setToHandles:(id)arg1;
- (id)toHandles;

@end