//
//  ViewController.h
//  MTG Recognizer
//
//  Created by Omega Tango - Carlos on 2/14/15.
//  Copyright (c) 2015 Omega Tango. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

- (IBAction)startWalkthrough:(id)sender;
@property (strong,nonatomic) UIPageViewController *pageViewController;
@property (strong,nonatomic) NSArray *pageTitles;
@property (strong,nonatomic) NSArray *pageImages;


@end

