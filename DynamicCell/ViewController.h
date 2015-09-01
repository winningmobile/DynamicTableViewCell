//
//  ViewController.h
//  DynamicCell
//
//  Created by monkey on 9/1/15.
//  Copyright (c) 2015 monkey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

{
    NSArray *tableDataArray;
}
@property (weak, nonatomic) IBOutlet UITableView *mTableView;

@end

