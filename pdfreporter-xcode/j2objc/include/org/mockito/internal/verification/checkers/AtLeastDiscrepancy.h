//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastDiscrepancy.java
//

#ifndef _OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_H_
#define _OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/reporting/Discrepancy.h"

@interface OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy : OrgMockitoInternalReportingDiscrepancy {
}

- (instancetype)initWithInt:(jint)wantedCount
                    withInt:(jint)actualCount;

- (NSString *)getPluralizedWantedCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy)

#endif // _OrgMockitoInternalVerificationCheckersAtLeastDiscrepancy_H_