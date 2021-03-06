/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

@interface FKTextFeature : NSObject {
    void *_backingObject;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _boundingBox;
    NSArray *_corners;
    int _featureID;
    int _scale;
    struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct vImage_Buffer { void *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct vImage_Buffer { void *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; } x10; struct lineseg {} *x11; int x12; int x13; int x14; struct concomp {} *x15; int x16; int x17; int x18; int x19; struct sequence {} *x20; int x21; int x22; int x23; int x24; } *_session;
    NSArray *_subFeatures;
    int _type;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly, retain) NSArray *corners;
@property (nonatomic, readonly) int featureID;
@property (nonatomic, retain) NSArray *subFeatures;
@property (nonatomic, readonly) int type;

+ (id)featureFromConcomp:(struct concomp { int x1; int x2; int x3; int x4; int x5; int x6; int x7; struct { struct { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_8_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_8_1_2; } x8; unsigned short x9; unsigned short x10; unsigned char x11; unsigned char x12; unsigned char x13; int x14[2]; BOOL x15[6]; }*)arg1 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct vImage_Buffer { void *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct vImage_Buffer { void *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; } x10; struct lineseg {} *x11; int x12; int x13; int x14; struct concomp {} *x15; int x16; int x17; int x18; int x19; struct sequence {} *x20; int x21; int x22; int x23; int x24; }*)arg2 roiOffset:(struct CGPoint { float x1; float x2; })arg3 dimensions:(struct CGSize { float x1; float x2; })arg4 type:(int)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(int*)arg7 scale:(int)arg8;
+ (id)featureFromSequenceIndex:(int)arg1 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct vImage_Buffer { void *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct vImage_Buffer { void *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; } x10; struct lineseg {} *x11; int x12; int x13; int x14; struct concomp {} *x15; int x16; int x17; int x18; int x19; struct sequence {} *x20; int x21; int x22; int x23; int x24; }*)arg2 roiOffset:(struct CGPoint { float x1; float x2; })arg3 dimensions:(struct CGSize { float x1; float x2; })arg4 createConcompFeatures:(BOOL)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(int*)arg7 scale:(int)arg8;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)corners;
- (void)dealloc;
- (int)featureID;
- (id)initWithType:(int)arg1 boundingBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 corners:(id)arg3 featureID:(int)arg4 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct vImage_Buffer { void *x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct vImage_Buffer { void *x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; } x10; struct lineseg {} *x11; int x12; int x13; int x14; struct concomp {} *x15; int x16; int x17; int x18; int x19; struct sequence {} *x20; int x21; int x22; int x23; int x24; }*)arg5 backingObject:(void*)arg6 scale:(int)arg7;
- (void)setSubFeatures:(id)arg1;
- (id)subFeatures;
- (int)type;

@end
