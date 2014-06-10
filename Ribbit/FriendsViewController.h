//
//  FriendsViewController.h
//  Crypt-chat
//
//  Created by wyatt on 5/2/14.
//  Copyright (c) 2014 wyatt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
