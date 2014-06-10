//
//  EditFriendsTableViewController.h
//  Crypt-chat
//
//  Created by wyatt on 5/2/14.
//  Copyright (c) 2014 wyatt. All rights reserved.//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL)isFriend:(PFUser *)user;

@end
