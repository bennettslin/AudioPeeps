//
//  YSAudioVC.h
//  AudioPeeps
//
//  Created by Yair Szarf on 2/23/14.
//  Copyright (c) 2014 The 2 Handed Consortium. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AppKit/AppKit.h>
#import "SSDragAudioImageView.h"

@interface PSAudioVC : NSViewController <SSDragAudioImageViewDraggingDelegate>

-(IBAction)redoLastUndo:(id)sender;
-(IBAction)undoLastChange:(id)sender;

@property (nonatomic) CGFloat playTime;

@end
