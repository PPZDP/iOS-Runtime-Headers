/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSharedStringIndex : NSObject <NSCopying> {
    NSMutableOrderedSet * _stringsSet;
}

@property (nonatomic, readonly) NSArray *strings;
@property (nonatomic, retain) NSMutableOrderedSet *stringsSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStrings:(id)arg1;
- (int)referenceForString:(id)arg1;
- (int)referenceForStringReadOnly:(id)arg1;
- (void)setStringsSet:(id)arg1;
- (id)stringForReference:(int)arg1;
- (id)strings;
- (id)stringsSet;

@end