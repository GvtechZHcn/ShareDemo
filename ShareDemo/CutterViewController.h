//
//  CutterViewController.h
//  ShareDemo
//
//  Created by ligf on 13-2-26.
//  Copyright (c) 2013年 ligf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CutterViewController : UIViewController<UIWebViewDelegate>
{
    UIWebView                       *webView;
    UIActivityIndicatorView         *activityIndicator;
}

@end
