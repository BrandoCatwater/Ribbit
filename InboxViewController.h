//
//  InboxViewController.h
//  Ribbit
//
//  Created by Brandon Chatreau on 2/19/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>
@interface InboxViewController : UITableViewController
@property (nonatomic, strong) NSArray *messages;
@property (nonatomic, strong) PFObject *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;


- (IBAction)logout:(id)sender;

@end
