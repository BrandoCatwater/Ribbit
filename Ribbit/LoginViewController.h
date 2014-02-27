//
//  LoginViewController.h
//  Ribbit
//
//  Created by Brandon Chatreau on 2/19/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)login:(id)sender;

@end
