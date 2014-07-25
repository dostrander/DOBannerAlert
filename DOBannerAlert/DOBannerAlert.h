//
//  DOBannerAlert.h
//  DOBannerAlert
//
//  Created by Derek Ostrander on 7/25/14.
//  Copyright (c) 2014 Derek Ostrander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DOBannerAlert : UIView
@property(nonatomic) CGFloat bannerSize;
@property(nonatomic) CGFloat alertLength;
@property(strong, nonatomic, setter=showInView :) UIView *showView;


#pragma mark - Position Setters
/**
 *  Sets the show position of the banner to the top of the view
 */
- (void)setPositionTop;

/**
 *  Sets the show position of the banner to the bottom of the view
 */
- (void)setPositionBottom;

/**
 *  Sets the show position of the banner to the center of the view
 */
- (void)setPositionCenter;

@end
