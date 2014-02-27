//
//  LoginViewController.m
//  Ribbit
//
//  Created by Brandon Chatreau on 2/19/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import "LoginViewController.h"
#import <Parse/Parse.h>

@interface LoginViewController ()

@end

@implementation LoginViewController



- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationItem.hidesBackButton = YES;
    
	// Do any additional setup after loading the view.
}


- (IBAction)login:(id)sender {
    NSString *userName = [self.usernameField.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    NSString *password = [self.passwordField.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
   
    
    if ([userName length] == 0 || [password length] == 0){
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Oops" message:@"Make Sure you Enter a Username and Password!" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
        [alertView show];
    }
    else
    {
        [PFUser logInWithUsernameInBackground:userName password:password block:^(PFUser *user, NSError *error) {
            if (error){
                UIAlertView *signUpAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:[error.userInfo objectForKey:@"error"] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
                [signUpAlert show];
            }
            else
            {
                [self.navigationController popToRootViewControllerAnimated:YES];
            }
            
        }];
    }

}
@end
