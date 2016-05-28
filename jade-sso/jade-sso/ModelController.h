//
//  ModelController.h
//  jade-sso
//
//  Created by Jadissa Griffin on 5/27/16.
//  Copyright © 2016 Jadissa Griffin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

