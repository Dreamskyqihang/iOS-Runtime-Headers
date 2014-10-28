/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, GKTextStyle, NSString;

@interface GKValueWithCaptionBubbleControl : GKBaseBubbleWithTextControl {
    GKLabel *_captionLabel;
    NSString *_captionText;
    GKTextStyle *_normalValueStyle;
    GKTextStyle *_overrideCaptionStyle;
    GKTextStyle *_overrideValueStyle;
    GKTextStyle *_smallValueStyle;
    GKLabel *_valueLabel;
    NSString *_valueText;
}

@property(retain) GKLabel * captionLabel;
@property(retain) NSString * captionText;
@property(retain) GKTextStyle * normalValueStyle;
@property BOOL oneLineOnly;
@property(retain) GKTextStyle * overrideCaptionStyle;
@property(retain) GKTextStyle * overrideValueStyle;
@property(retain) GKTextStyle * smallValueStyle;
@property(retain) GKLabel * valueLabel;
@property(retain) NSString * valueText;

- (void)_updateCaptionTextLabel;
- (void)_updateValueTextLabel;
- (id)attributedCaptionText;
- (id)attributedValueText;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;
- (id)captionLabel;
- (id)captionText;
- (id)captionTextStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)normalValueStyle;
- (BOOL)oneLineOnly;
- (id)overrideCaptionStyle;
- (id)overrideValueStyle;
- (void)setAttributedCaptionText:(id)arg1;
- (void)setAttributedValueText:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCaptionText:(id)arg1;
- (void)setNormalValueStyle:(id)arg1;
- (void)setOneLineOnly:(BOOL)arg1;
- (void)setOverrideCaptionStyle:(id)arg1;
- (void)setOverrideValueStyle:(id)arg1;
- (void)setSmallValueStyle:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueText:(id)arg1;
- (id)smallValueStyle;
- (void)updateTextFieldsFor3DScaling;
- (id)valueLabel;
- (id)valueText;
- (id)valueTextStyle;

@end