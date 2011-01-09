/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSString;



@interface SSItemArtworkImage : NSObject 
{
    NSInteger _height;
    NSString *_imageKind;
    BOOL _prerendered;
    NSURL *_url;
    NSInteger _width;
}

@property(readonly) NSInteger width;
@property(readonly) NSURL *URL;
@property(getter=isPrerendered,readonly) BOOL prerendered;
@property(readonly) NSString *imageKind;
@property(readonly) NSInteger height;


- (id)initWithArtworkDictionary:(id)arg1;
- (id)imageKind;
- (NSInteger)height;
- (id)URL;
- (NSInteger)width;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)dealloc;
- (BOOL)isPrerendered;

@end