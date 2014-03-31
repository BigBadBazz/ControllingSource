//
//  DetailViewController.h
//  ExistingProject
//
//  Created by Barry Weatherstone on 28/03/2014.
//  Copyright (c) 2014 Barry Weatherstone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
