//
//  FriendsViewController.h
//  Ribbit
//
//  Created by Brandon Chatreau on 2/20/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController
@property (nonatomic,strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
