/* Generated by RuntimeBrowser.
 */

@protocol UICollectionViewDataSource <NSObject>

@required

- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (int)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(int)arg2;

@optional

- (BOOL)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (int)numberOfSectionsInCollectionView:(UICollectionView *)arg1;

@end
