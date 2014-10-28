/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSProgress;

@interface PLCloudScenario : NSObject {
    NSArray *_operations;
    unsigned int _priority;
    NSProgress *_progress;
}

@property(retain) NSArray * operations;
@property unsigned int priority;
@property(retain) NSProgress * progress;

- (void)dealloc;
- (id)operations;
- (unsigned int)priority;
- (id)progress;
- (void)requestCancel;
- (void)setOperations:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setProgress:(id)arg1;

@end