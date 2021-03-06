/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {
    int  _autocapitalizationType;
    int  _autocorrectionType;
    <_SFBookmarkTextEntryTableViewControllerDelegate> * _delegate;
    NSString * _initialText;
    SFBookmarkTextEntryTableViewCell * _textEntryCell;
}

- (void).cxx_destruct;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)dealloc;
- (id)initWithBookmarkInfoViewField:(unsigned int)arg1 text:(id)arg2 autocapitalizationType:(int)arg3 autocorrectionType:(int)arg4 delegate:(id)arg5;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
