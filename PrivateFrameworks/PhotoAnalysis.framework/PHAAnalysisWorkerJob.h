/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob {
    BOOL  _canUseNetwork;
    NSMutableDictionary * _ignoreUntilDatesByAssetLocalIdentifier;
    BOOL  _shouldBackoffForFailedNoResourceErrors;
    NSDictionary * _workerFlagsByAssetLocalIdentifier;
}

@property (nonatomic, readonly) BOOL canUseNetwork;
@property (nonatomic, readonly) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier;
@property (nonatomic, readonly) BOOL shouldBackoffForFailedNoResourceErrors;
@property (nonatomic, readonly) NSDictionary *workerFlagsByAssetLocalIdentifier;

- (void).cxx_destruct;
- (id)_fetchAllAssetsForLocalIdentifiers:(id)arg1;
- (void)_markAssetsPending;
- (void)_processFailures;
- (id)_resultsDescription;
- (BOOL)canUseNetwork;
- (id)dataLoaderOptions;
- (id)description;
- (void)finish;
- (id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1;
- (id)ignoreUntilDatesByAssetLocalIdentifier;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned int)arg2 workInfos:(id)arg3 canUseNetwork:(BOOL)arg4 shouldBackoffForFailedNoResource:(BOOL)arg5 library:(id)arg6;
- (void)prepare;
- (void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (BOOL)shouldBackoffForFailedNoResourceErrors;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)statusAsDictionary;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)workerFlagsByAssetLocalIdentifier;
- (int)workerFlagsForAssetLocalIdentifier:(id)arg1;

@end