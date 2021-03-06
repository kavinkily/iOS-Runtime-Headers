/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILayoutGuide : NSObject <NSCoding, NSISVariableDelegate, _UILayoutItem> {
    BOOL __shouldBeArchived;
    BOOL _allowOwningViewSetting;
    NSLayoutYAxisAnchor *_bottomAnchor;
    NSISVariable *_boundsHeightVariable;
    NSISVariable *_boundsWidthVariable;
    NSLayoutXAxisAnchor *_centerXAnchor;
    NSLayoutYAxisAnchor *_centerYAnchor;
    NSLayoutDimension *_heightAnchor;
    NSString *_identifier;
    BOOL _isLayoutFrameValid;
    BOOL _isLockedToOwningView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layoutFrame;
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutXAxisAnchor *_leftAnchor;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    UIView *_owningView;
    NSLayoutXAxisAnchor *_rightAnchor;
    NSArray *_systemConstraints;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutXAxisAnchor *_trailingAnchor;
    UIView *_unsafeUnretainedOwningView;
    BOOL _useManualLayoutFrame;
    NSLayoutDimension *_widthAnchor;
}

@property (setter=_setAllowOwningViewSetting:, nonatomic) BOOL _allowOwningViewSetting;
@property (setter=_setBoundsHeightVariable:, nonatomic, retain) NSISVariable *_boundsHeightVariable;
@property (setter=_setBoundsWidthVariable:, nonatomic, retain) NSISVariable *_boundsWidthVariable;
@property (getter=_isLockedToOwningView, setter=_setLockedToOwningView:, nonatomic) BOOL _lockedToOwningView;
@property (setter=_setMinXVariable:, nonatomic, retain) NSISVariable *_minXVariable;
@property (setter=_setMinYVariable:, nonatomic, retain) NSISVariable *_minYVariable;
@property (setter=_setShouldBeArchived:, nonatomic) BOOL _shouldBeArchived;
@property (setter=_setSystemConstraints:, nonatomic, retain) NSArray *_systemConstraints;
@property (nonatomic, readonly) BOOL _useManualLayoutFrame;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } layoutFrame;
@property (readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic) UIView *owningView;
@property (readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (readonly) NSLayoutDimension *widthAnchor;

+ (float)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;

- (void).cxx_destruct;
- (BOOL)_allowOwningViewSetting;
- (id)_boundsHeightVariable;
- (id)_boundsWidthVariable;
- (id)_createAnchorWithClass:(Class)arg1 attribute:(int)arg2;
- (BOOL)_isLockedToOwningView;
- (id)_minXVariable;
- (id)_minYVariable;
- (void)_owningViewIsDeallocating;
- (void*)_referenceView;
- (void)_setAllowOwningViewSetting:(BOOL)arg1;
- (void)_setBoundsHeightVariable:(id)arg1;
- (void)_setBoundsWidthVariable:(id)arg1;
- (void)_setLockedToOwningView:(BOOL)arg1;
- (void)_setManualLayoutFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setMinXVariable:(id)arg1;
- (void)_setMinYVariable:(id)arg1;
- (void)_setOwningView:(id)arg1;
- (void)_setShouldBeArchived:(BOOL)arg1;
- (void)_setSystemConstraints:(id)arg1;
- (BOOL)_shouldBeArchived;
- (void)_snipReferencingConstraints;
- (id)_systemConstraints;
- (BOOL)_useManualLayoutFrame;
- (id)bottomAnchor;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)heightAnchor;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutFrame;
- (id)leadingAnchor;
- (id)leftAnchor;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (unsigned int)nsli_autoresizingMask;
- (id)nsli_boundsHeightVariable;
- (id)nsli_boundsWidthVariable;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (struct CGSize { float x1; float x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })nsli_convertSizeToEngineSpace:(struct CGSize { float x1; float x2; })arg1;
- (id)nsli_description;
- (BOOL)nsli_descriptionIncludesPointer;
- (id)nsli_installedConstraints;
- (BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (BOOL)nsli_isFlipped;
- (id)nsli_layoutEngine;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 container:(id)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 forConstraint:(id)arg4;
- (float)nsli_marginOffsetForAttribute:(int)arg1;
- (id)nsli_minXVariable;
- (id)nsli_minYVariable;
- (BOOL)nsli_removeConstraint:(id)arg1;
- (BOOL)nsli_resolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (id)nsli_superitem;
- (id)owningView;
- (id)rightAnchor;
- (void)setIdentifier:(id)arg1;
- (void)setOwningView:(id)arg1;
- (id)topAnchor;
- (id)trailingAnchor;
- (id)widthAnchor;

@end
