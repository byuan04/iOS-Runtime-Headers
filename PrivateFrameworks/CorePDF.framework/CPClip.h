/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPClip : NSObject <CPDisposable> {
    struct CGPath { } *path;
    int windingRule;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initWithPath:(struct CGPath { }*)arg1 windingRule:(int)arg2;
- (struct CGPath { }*)path;
- (int)windingRule;

@end