//
//  ImageViewController.h
//  Ribbit
//
//  Created by Brandon Chatreau on 2/25/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController
@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
