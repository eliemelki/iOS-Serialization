//
//  BRAbsoluteURLSerialization.h
//  BRJsonParser
//
//  Created by ELie Melki on 10/4/15.
//  Copyright © 2015 Elie Melki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BRISerialization.h"

@interface BRAbsoluteURLSerialization : NSObject<BRISerialization>

+ (instancetype) absoluteURLSerialization;

- (NSString *) serialize:(NSURL *)theObject;
- (NSURL *) deserialize:(NSString *)theData;

@end
