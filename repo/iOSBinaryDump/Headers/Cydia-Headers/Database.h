/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@class NSObject<DatabaseDelegate>, NSObject<ProgressDelegate>;

@interface Database : _CC_MD5
{
    struct _NSZone *zone_;
    struct CYPool pool_;
    unsigned int era_;
    struct MenesObjectHandle<NSDate, 0> delock_;
    struct pkgCacheFile cache_;
    struct Policy *policy_;
    struct pkgRecords *records_;
    struct pkgProblemResolver *resolver_;
    struct pkgAcquire *fetcher_;
    struct FileFd *lock_;
    struct SPtr<pkgPackageManager> manager_;
    struct pkgSourceList *list_;
    struct map<unsigned long, MenesObjectHandle<Source, 0>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, MenesObjectHandle<Source, 0>>>> sourceMap_;
    struct MenesObjectHandle<NSMutableArray, 0> sourceList_;
    struct __CFArray *packages_;
    NSObject<DatabaseDelegate> *delegate_;
    NSObject<ProgressDelegate> *progress_;
    struct CydiaStatus status_;
    int cydiafd_;
    int statusfd_;
    struct __sFILE *input_;
    struct map<const char *, MenesObjectHandle<NSString, 0>, std::less<const char *>, std::allocator<std::pair<const char *const, MenesObjectHandle<NSString, 0>>>> sections_;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mappedSectionForPointer:(const char *)fp8;
- (void)resetFetch;
- (void)setFetch:(_Bool)fp8 forURI:(const char *)fp12;
- (id)getSource:(struct PkgFileIterator)fp8;
- (id)progressDelegate;
- (void)setProgressDelegate:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)updateWithStatus:(struct CancelStatus *)fp8;
- (void)update;
- (_Bool)upgrade;
- (_Bool)delocked;
- (void)perform;
- (_Bool)prepare;
- (_Bool)clean;
- (void)configure;
- (void)clear;
- (void)reloadDataWithInvocation:(id)fp8;
- (_Bool)popErrorWithTitle:(id)fp8 forReadList:(struct pkgSourceList *)fp12;
- (_Bool)_isEtceteraAptSourcesListDirectoryCydiaListSymbolicallyLinkedToMobileCachesCydiaSourceList;
- (_Bool)popErrorWithTitle:(id)fp8 forOperation:(_Bool)fp12;
- (_Bool)popErrorWithTitle:(id)fp8;
- (id)sourceWithKey:(id)fp8;
- (id)sources;
- (id)packages;
- (struct pkgSourceList *)list;
- (struct pkgAcquire *)fetcher;
- (struct pkgProblemResolver *)resolver;
- (struct pkgRecords *)records;
- (struct Policy *)policy;
- (struct pkgCacheFile *)cache;
- (id)init;
- (id)packageWithName:(id)fp8;
- (struct __sFILE *)input;
- (void)_readOutput:(id)fp8;
- (void)_readStatus:(id)fp8;
- (void)_readCydia:(id)fp8;
- (void)dealloc;
- (void)releasePackages;
- (unsigned int)era;

@end

