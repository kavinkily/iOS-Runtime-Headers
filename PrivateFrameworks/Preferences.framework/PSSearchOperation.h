/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSSearchOperationDelegate>, NSSet, NSString, PSSearchResults;

@interface PSSearchOperation : NSOperation {
    PSSearchResults *_currentResults;
    <PSSearchOperationDelegate> *_delegate;
    BOOL _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
}

@property(copy,readonly) PSSearchResults * currentResults;
@property <PSSearchOperationDelegate> * delegate;
@property(getter=isNewQuery) BOOL newQuery;
@property(copy,readonly) NSString * query;
@property(copy,readonly) NSSet * rootEntries;

+ (struct __CFStringTokenizer { }*)_wordBoundaryTokenizer;

- (void)_didCancel;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (id)currentResults;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (BOOL)isNewQuery;
- (void)main;
- (id)query;
- (id)rootEntries;
- (void)setDelegate:(id)arg1;
- (void)setNewQuery:(BOOL)arg1;

@end