//
//  NoteDetailViewController.h
//  Notes
//
//  Created by Jordan on 9/15/14.
//  Copyright (c) 2014 Byjor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Note.h"

@class Note;

@interface NoteDetailViewController : UIViewController

@property (nonatomic, strong) Note *note;

@end
