//
//  GCConstants.h
//
//  Copyright 2011 Chute Corporation. All rights reserved.
//

//////////////////////////////////////////////////////////
//                                                      //
//                   VERSION 1.0.9                      //
//                                                      //
//////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////
// Set which service is to be used
// 0 - Facebook
// 1 - Evernote
// 2 - Chute
// 3 - Twitter
// 4 - Foursquare

#define kSERVICE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////

#define API_URL @"https://api.getchute.com/v1/"
#define SERVER_URL @"https://getchute.com"

////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define kUDID               [[UIDevice currentDevice] uniqueIdentifier]
#define kDEVICE_NAME        [[UIDevice currentDevice] name]
#define kDEVICE_OS          [[UIDevice currentDevice] systemName]
#define kDEVICE_VERSION     [[UIDevice currentDevice] systemVersion]

#warning Replace the following setting with your own client info
#define kOAuthCallbackURL               @"http://getchute.com/oauth/callback"
#define kOAuthCallbackRelativeURL       @"/oauth/callback"

#define kOAuthAppID                     @"50f1c63b6e29315150000358"
#define kOAuthAppSecret                 @"9185704a6367f75984954c64797c4b81ab7a88116d690a16ef83dc4ac64a7425"

#define kOAuthAppID                     @"5086e3f38a9eb0132e000013"
#define kOAuthAppSecret                 @"2148b0d471314d3214e4247e293b4077f7fdf8477dc1c911098d4ac871228331"
#define kChuteID                        @"2307238"

#define kOAuthPermissions               @"all_resources manage_resources profile resources"

#define kOAuthTokenURL                  @"https://getchute.com/oauth/access_token"


#define API_URL @"https://api.getchute.com/v1/"
#define SERVER_URL @"https://getchute.com"

////////////////////////////////////////////////////////////////////////////////////////////////////////