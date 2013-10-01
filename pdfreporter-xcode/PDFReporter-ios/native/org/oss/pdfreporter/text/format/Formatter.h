//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/jasperawtios/src/Formatter.java
//
//  Created by fr3e on 7/30/13.
//

#ifndef _Formatter_H_
#define _Formatter_H_

@protocol JavaUtilList;

#import "JreEmulation.h"

#define Formatter_CUSTOM_MODE 2
#define Formatter_FLAG_DATE_MODE 0
#define Formatter_FORMAT_DATE_MODE 2
#define Formatter_FORMAT_MODE 1
#define Formatter_TEXT_MODE 0
#define Formatter_WIDTH_DATE_MODE 1

@interface Formatter : NSObject {
}

+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)params;
+ (NSString *)parseDateWithNSString:(NSString *)value
                             withId:(id)param;
+ (id<JavaUtilList>)splitWithNSString:(NSString *)value;
- (id)init;
@end

#endif // _Formatter_H_