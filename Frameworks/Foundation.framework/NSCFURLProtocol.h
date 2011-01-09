/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCFURLProtocol : NSURLProtocol 
{
    struct _CFURLProtocol { } *cfProt;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)stopLoading;
- (void)finalize;
- (void)dealloc;

@end