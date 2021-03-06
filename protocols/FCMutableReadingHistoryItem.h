/* Generated by RuntimeBrowser.
 */

@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>

@required

- (NSString *)articleID;
- (unsigned int)articleLikingStatus;
- (BOOL)hasArticleBeenConsumed;
- (BOOL)hasArticleBeenMarkedOffensive;
- (BOOL)hasArticleBeenRead;
- (BOOL)hasArticleBeenSeen;
- (NSString *)identifier;
- (NSDate *)lastVisitedAt;
- (unsigned long long)maxVersionRead;
- (void)setArticleID:(NSString *)arg1;
- (void)setArticleLikingStatus:(unsigned int)arg1;
- (void)setHasArticleBeenConsumed:(BOOL)arg1;
- (void)setHasArticleBeenMarkedOffensive:(BOOL)arg1;
- (void)setHasArticleBeenRead:(BOOL)arg1;
- (void)setHasArticleBeenSeen:(BOOL)arg1;
- (void)setLastVisitedAt:(NSDate *)arg1;
- (void)setMaxVersionRead:(unsigned long long)arg1;

@end
