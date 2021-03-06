//
//  ViewControllerNode.h
//  Student Scholarship App
//
//  Created by Austin Chan on 5/1/13.
//  Copyright (c) 2013 Austin Chan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlutoViewController.h"

@interface ViewControllerNode : UIViewController

@property PlutoViewController *owner;
@property NSInteger excess, theHeight;

- (void)buttonUp:(UIButton *)sender;
- (void)buttonDown:(UIButton *)sender;

@end
