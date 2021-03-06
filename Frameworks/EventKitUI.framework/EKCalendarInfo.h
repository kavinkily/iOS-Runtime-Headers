/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarInfo : NSObject {
    EKCalendar *_calendar;
    UIColor *_color;
    int _customGroupType;
    EKGroupInfo *_group;
    BOOL _selected;
    NSString *_title;
}

@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int customGroupType;
@property (nonatomic, readonly) int displayOrder;
@property (nonatomic, readonly) BOOL excludeFromSelectAll;
@property (nonatomic) EKGroupInfo *group;
@property (nonatomic, readonly) UIImage *highlightedIcon;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) BOOL isEditable;
@property (nonatomic, readonly) BOOL isPublished;
@property (nonatomic, readonly) BOOL isShared;
@property (nonatomic, readonly) BOOL isSubscribed;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateCustomGroupType;
- (id)calendar;
- (id)color;
- (int)customGroupType;
- (id)description;
- (int)displayOrder;
- (BOOL)excludeFromSelectAll;
- (id)group;
- (id)highlightedIcon;
- (id)icon;
- (id)initWithCalendar:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isPublished;
- (BOOL)isShared;
- (BOOL)isSubscribed;
- (BOOL)selected;
- (void)setCalendar:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCustomGroupType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;

@end
