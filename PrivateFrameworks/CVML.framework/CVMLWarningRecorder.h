/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder> {
    NSMutableDictionary * _warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)hasWarnings;
- (id)init;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
