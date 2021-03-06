//
//  CSHomeViewController.h
//  EasyReader
//
//  Created by Joseph Lorich on 4/4/13.
//  Copyright (c) 2013 Cloudspace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSBaseViewController.h"

@class User, AFJSONRequestOperation, CSEnhancedTableView;

/**
 * The home view controller for the feed parser
 */
@interface CSHomeViewController : CSBaseViewController <
//  UICollectionViewDataSource,
  UITableViewDataSource,
  UITableViewDelegate
>

{
  AFJSONRequestOperation *_requestOperation;
}

#pragma mark - UI Properties
@property (nonatomic, retain) IBOutlet CSEnhancedTableView *tableView_feed;
@property (nonatomic, retain) UIBarButtonItem *barButton_menu;


#pragma mark - Properties
@property (nonatomic, retain) User *currentUser;
@property (nonatomic, retain) NSArray *feedData;
@property (nonatomic, retain) NSArray *feedsByDay;

@property NSInteger feedOffset;
@property NSInteger feedLimit;


@end
