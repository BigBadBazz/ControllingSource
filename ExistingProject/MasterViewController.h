//
//  MasterViewController.h
//  ExistingProject
//
//  Created by Barry Weatherstone on 28/03/2014.
//  Copyright (c) 2014 Barry Weatherstone. All rights reserved.
// A test

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
