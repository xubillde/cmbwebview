//
//  ViewController.h
//  WebView
//
//  Created by 周赞 on 16/8/4.
//  Copyright © 2016年 xubin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithURLString:(NSString *)urlString;
@property (nonatomic, strong) NSURL *webUrl;
@property (nonatomic, copy) NSString *webStrUrl;
@end

