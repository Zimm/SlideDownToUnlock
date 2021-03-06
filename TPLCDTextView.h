/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDTextView.h"
#import <UIKit/UIView.h>

@class NSString, TPLCDTextViewScrollingView, UIColor, UIFrameAnimation;

@interface TPLCDTextView : UIView {
	NSString* _text;
	GSFontRef _font;
	UIColor* _shadowColor;
	UIColor* _textColor;
	TPLCDTextViewScrollingView* _scrollingView;
	float _fontSize;
	CGRect _textRect;
	UIFrameAnimation* _animation;
	id _delegate;
	float _minFontSize;
	unsigned _textRectIsValid : 1;
	unsigned _centerText : 1;
	unsigned _animates : 1;
	unsigned _isAnimating : 1;
	unsigned _leftTruncates : 1;
}
+(float)defaultMinimumFontSize;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGRect)textRect;
-(void)setFrame:(CGRect)frame;
-(void)setCenterText:(BOOL)text;
-(void)setLeftTruncatesText:(BOOL)text;
-(void)setFont:(GSFontRef)font;
-(void)setMinimumFontSize:(float)size;
-(void)setText:(id)text;
-(id)text;
-(CGSize)sizeToFit;
-(void)_drawTextInRect:(CGRect)rect verticallyOffset:(BOOL)offset;
-(void)setTextColor:(id)color;
-(void)setShadowColor:(id)color;
-(void)drawRect:(CGRect)rect;
-(void)_tearDownAnimation;
-(void)_scheduleStartScrolling;
-(void)_setupForAnimationIfNecessary;
-(void)setAnimatesIfTruncated:(BOOL)truncated;
-(void)_startScrolling;
-(void)startAnimating;
-(void)_finishedScrolling;
-(void)stopAnimating;
-(BOOL)animates;
-(void)resetAnimation;
-(void)setDelegate:(id)delegate;
@end

@interface TPLCDTextView (SyntheticEvents)
-(id)_automationID;
@end

