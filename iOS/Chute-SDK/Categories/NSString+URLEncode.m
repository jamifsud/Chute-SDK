//
//  NSString+URLEncode.m
//  Chute-SDK
//
//  Created by Aleksandar Trpeski on 3/29/13.
//  Copyright (c) 2013 Chute. All rights reserved.
//

#import "NSString+URLEncode.h"

@implementation NSString (URLEncode)

- (NSString *)URLEncoded
{
	NSString *newString = [NSMakeCollectable(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)self, NULL, CFSTR(":/?#[]@!$ &'()*+,;=\"<>%{}|\\^~`"), CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding))) autorelease];
	if (newString) {
        return newString;
	}
    else
        return @"";
}


@end
