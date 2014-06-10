//
//  LoginViewController.h
//  Crypt-chat
//
//  Created by wyatt on 5/2/14.
//  Copyright (c) 2014 wyatt. All rights reserved.

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (strong, nonatomic) IBOutlet UIImageView *background;

- (IBAction)login:(id)sender;

@end
