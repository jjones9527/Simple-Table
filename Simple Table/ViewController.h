//
//  ViewController.h
//  Simple Table
//
//  Created by Jeremy Jones on 12/1/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITableViewDelegate, UITableViewDataSource>
{
    NSArray *listData;
}

@property (nonatomic, retain) NSArray *listData;

@end
