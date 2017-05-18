/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

#import <React/RCTComponent.h>

@class RCTEventDispatcher;
@class RCTAccessibilityManager;

@interface RCTTextField : UITextField

@property (nonatomic, assign) BOOL caretHidden;
@property (nonatomic, assign) BOOL selectTextOnFocus;
@property (nonatomic, assign) BOOL blurOnSubmit;
@property (nonatomic, assign) UIEdgeInsets contentInset;
@property (nonatomic, strong) UIColor *placeholderTextColor;
@property (nonatomic, assign) NSInteger mostRecentEventCount;
@property (nonatomic, strong) NSNumber *maxLength;
@property (nonatomic, assign) CGFloat fontSizeMultiplier;
@property (nonatomic, assign) BOOL allowFontScaling;
@property (nonatomic, copy) NSString *fontFamily;
@property (nonatomic, strong) NSNumber *fontSize;
@property (nonatomic, copy) NSString *fontWeight;
@property (nonatomic, copy) NSString *fontStyle;

@property (nonatomic, copy) RCTDirectEventBlock onSelectionChange;

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher withAccessibilityManager:(RCTAccessibilityManager *)accessibilityManager NS_DESIGNATED_INITIALIZER;
- (void)updateFont;

@end
