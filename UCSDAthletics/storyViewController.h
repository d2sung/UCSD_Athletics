//
//  storyViewController.h
//  UCSDAthletics
//
//  Created by Daniel Sung on 12/27/16.
//  Copyright © 2016 Daniel Sung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface storyViewController : UIViewController

@property NSArray * storyArray;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *storyImageView;
@property (weak, nonatomic) IBOutlet UITextView *storyTextView;

@end
