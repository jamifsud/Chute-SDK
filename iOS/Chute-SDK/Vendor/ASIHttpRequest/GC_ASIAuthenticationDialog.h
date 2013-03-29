//
//  ASIAuthenticationDialog.h
//  Part of ASIHTTPRequest -> http://allseeing-i.com/ASIHTTPRequest
//
//  Created by Ben Copsey on 21/08/2009.
//  Copyright 2009 All-Seeing Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class GC_ASIHTTPRequest;

typedef enum _GC_ASIAuthenticationType {
	GC_ASIStandardAuthenticationType = 0,
    GC_ASIProxyAuthenticationType = 1
} GC_ASIAuthenticationType;

@interface GC_ASIAutorotatingViewController : UIViewController
@end

@interface GC_ASIAuthenticationDialog : GC_ASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {
	GC_ASIHTTPRequest *request;
	GC_ASIAuthenticationType type;
	UITableView *tableView;
	UIViewController *presentingController;
	BOOL didEnableRotationNotifications;
}
+ (void)presentAuthenticationDialogForRequest:(GC_ASIHTTPRequest *)request;
+ (void)dismiss;

@property (retain) GC_ASIHTTPRequest *request;
@property (assign) GC_ASIAuthenticationType type;
@property (assign) BOOL didEnableRotationNotifications;
@property (retain, nonatomic) UIViewController *presentingController;
@end
