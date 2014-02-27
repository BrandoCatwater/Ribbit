//
//  ImageViewController.m
//  Ribbit
//
//  Created by Brandon Chatreau on 2/25/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import "ImageViewController.h"

@interface ImageViewController ()

@end

@implementation ImageViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
	PFFile *imageFile = [self.message objectForKey:@"file"];
    NSURL *imageFileUrl = [[NSURL alloc] initWithString:imageFile.url];
    NSData *imageData = [NSData dataWithContentsOfURL:imageFileUrl];
    self.imageView.image = [UIImage imageWithData:imageData];
    NSString *senderName = [self.message objectForKey:@"senderName"];
    NSString *title = [NSString stringWithFormat:@"Sent from %@", senderName];
    self.navigationItem.title = title;
}

- (void) viewDidAppear:(BOOL)animated  {
    [super viewDidAppear:animated];
    
    [NSTimer scheduledTimerWithTimeInterval:10 target:self selector:@selector(timeout) userInfo:nil repeats:NO];
}

#pragma mark - Helper Methods
- (void)timeout {
    [self.navigationController popViewControllerAnimated:YES];
}


@end
