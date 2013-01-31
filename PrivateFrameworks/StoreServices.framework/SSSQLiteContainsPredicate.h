/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteQuery, NSString, NSArray;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {
    BOOL _negative;
    SSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property(getter=isNegative,readonly) BOOL negative;
@property(readonly) SSSQLiteQuery * query;
@property(readonly) NSString * queryProperty;
@property(readonly) NSArray * values;

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)queryProperty;
- (BOOL)isNegative;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)values;
- (id)query;

@end