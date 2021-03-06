/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIVibrantButton : UIControl <SBUILegibility, _SBFVibrantView> {
    UIImage * _glyphImage;
    _UILegibilitySettings * _legibilitySettings;
    int  _lineBreakMode;
    float  _minimumTitleScaleFactor;
    UIView * _nonVibrantGlyph;
    SBUILegibilityView * _nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel * _nonVibrantLegibilityLabel;
    int  _numberOfLines;
    float  _strength;
    int  _textAlignment;
    NSString * _title;
    BOOL  _vibrancyAllowed;
    UIView * _vibrantGlyph;
    UIView * _vibrantGlyphBackgroundView;
    UIView * _vibrantGlyphTintView;
    UIImageView * _vibrantMaskGlyphView;
    UILabel * _vibrantMaskLabel;
    UIView * _vibrantMaskView;
    _SBFVibrantSettings * _vibrantSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *glyphImage;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) int lineBreakMode;
@property (nonatomic) float minimumTitleScaleFactor;
@property (nonatomic) int numberOfLines;
@property (nonatomic) float strength;
@property (readonly) Class superclass;
@property (nonatomic) int textAlignment;
@property (nonatomic, copy) NSString *title;
@property (getter=isVibrancyAllowed, nonatomic) BOOL vibrancyAllowed;
@property (nonatomic, retain) _SBFVibrantSettings *vibrantSettings;

+ (id)_labelFont;

- (void).cxx_destruct;
- (float)_alphaForState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_glyphFrameForSize:(struct CGSize { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrameForSize:(struct CGSize { float x1; float x2; })arg1 baselineOffset:(float)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutNonVibrantSubviews;
- (void)_layoutVibrantSubviews;
- (id)_lazyGlyphLegibilityView;
- (void)_setUpForCurrentVibrancy;
- (BOOL)_shouldUseVibrancy;
- (struct CGSize { float x1; float x2; })_sizeThatFitsForLabelView:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeThatFitsWithVibrancy;
- (struct CGSize { float x1; float x2; })_sizeThatFitsWithoutVibrancy;
- (void)_updateForState;
- (id)backgroundColor;
- (id)glyphImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVibrancyAllowed;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (int)lineBreakMode;
- (float)minimumTitleScaleFactor;
- (int)numberOfLines;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLegibilitySettings:(id)arg1 textStrength:(float)arg2;
- (void)setLineBreakMode:(int)arg1;
- (void)setMinimumTitleScaleFactor:(float)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setStrength:(float)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrancyAllowed:(BOOL)arg1;
- (void)setVibrantSettings:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)strength;
- (int)textAlignment;
- (id)title;
- (id)vibrantSettings;

@end
