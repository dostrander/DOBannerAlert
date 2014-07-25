//
//  DOBannerAlert.m
//  DOBannerAlert
//
//  Created by Derek Ostrander on 7/25/14.
//  Copyright (c) 2014 Derek Ostrander. All rights reserved.
//

#import "DOBannerAlert.h"

typedef enum : NSUInteger {
                 BannerAlertTop,
                 BannerAlertBottom,
                 BannerAlertCenter,
               } DOBannerAlertPosition;

@interface DOBannerAlert ()
@property(nonatomic) DOBannerAlertPosition position;
@end

@implementation DOBannerAlert
#pragma mark - -Public-
#pragma mark - Position Setters
- (void)setPositionTop {
  _position = BannerAlertTop;
}
- (void)setPositionBottom {
  _position = BannerAlertBottom;
}
- (void)setPositionCenter {
  _position = BannerAlertCenter;
}

@end
