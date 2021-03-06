/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUPropertySet : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_properties;
    NSDictionary *_relationships;
}

@property (nonatomic, readonly) NSSet *properties;
@property (nonatomic, readonly) NSDictionary *relationships;

+ (id)propertySetWithProperties:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)properties;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
- (id)relationships;

@end
