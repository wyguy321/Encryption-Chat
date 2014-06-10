//
//  ImageViewController.h
//  Crypt-chat
//
//  Created by wyatt on 5/4/14.
//  Copyright (c) 2014 wyatt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
