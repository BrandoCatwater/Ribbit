//
//  CameraViewController.h
//  Ribbit
//
//  Created by Brandon Chatreau on 2/21/2014.
//  Copyright (c) 2014 Brandon Chatreau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface CameraViewController : UITableViewController <UIImagePickerControllerDelegate , UINavigationControllerDelegate>

@property (nonatomic, strong) UIImagePickerController *imagepicker;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *videoFilePath;
@property (nonatomic, strong) NSArray *friends;
@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSMutableArray *recipients;

- (IBAction)Cancel:(id)sender;
- (IBAction)Send:(id)sender;

- (void)uploadMessage;
- (void)reset;
- (UIImage *)resizeImage:(UIImage *)image toWidth:(float)width andHeight:(float)height;

@end
