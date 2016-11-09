//
//  TxtViewController.h
//  TxtReader
//
//  Created by WzxJiang on 16/11/7.
//  Copyright © 2016年 WzxJiang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TxtPageModel;

@protocol WZXTxtViewControllerDelegate <NSObject>

- (void)txtViewControllerClickLeft;
- (void)txtViewControllerClickRight;

@end

@interface WZXTxtViewController : UIViewController

@property (nonatomic, strong) UILabel * chapterLabel;
@property (nonatomic, strong) UILabel * numLabel;
@property (nonatomic, strong) UITextView * textView;

@property (nonatomic, weak) id <WZXTxtViewControllerDelegate> delegate;

@property (nonatomic, strong) TxtPageModel * pageModel;

@property (nonatomic, assign, readonly) NSUInteger pageNum;
@property (nonatomic, assign, readonly) NSUInteger chapterNum;
@end
