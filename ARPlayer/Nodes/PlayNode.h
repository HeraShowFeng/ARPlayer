//
//  PlayNode.h
//  ARPlayer
//
//  Created by Maxim Makhun on 9/30/17.
//  Copyright © 2017 Maxim Makhun. All rights reserved.
//

@import SceneKit;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PlayerState) {
    StatePlaying,
    StatePaused,
};

@interface PlayNode : SCNNode

- (void)updateState:(PlayerState)state;

@end

NS_ASSUME_NONNULL_END
