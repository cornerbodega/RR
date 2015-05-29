//
//  MasterViewController.h
//  RR.0
//
//  Created by Dr. Marv on 5/25/15.
//  Copyright (c) 2015 Dr. Marv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

