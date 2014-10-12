//
//  PBBackground.h
//  Prison Bust
//
//  Created by Mac Admin on 4/23/14.
//  Copyright (c) 2014 Ben Gabay. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

static NSString *backgroundName = @"background";
static NSString *midgroundName = @"parallax";
static NSString *foregroundName = @"foreground";
static NSString *midgroundShooterNameBomb = @"midgroundShooterBomb";
static NSString *midgroundShooterNameMissile = @"midgroundShooterMissile";

@interface PBBackground : SKSpriteNode

+ (instancetype)backgroundNode;
+ (instancetype)midgroundNode;
+ (instancetype)foregroundNode;
+ (instancetype)midgroundNodeWithBombShooter;
+ (instancetype)midgroundNodeWithMissileShooter;

- (SKAction *)fireBombArtillery;
- (SKAction *)fireMissileArtillery;
@end
