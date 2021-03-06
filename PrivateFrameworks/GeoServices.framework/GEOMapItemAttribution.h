/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAttribution : NSObject {
    NSArray *_attributionURLs;
    GEOSearchAttributionInfo *_info;
    NSString *_poiID;
    NSString *_yelpID;
}

@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) NSArray *attributionURLs;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) BOOL requiresAttributionInCallout;
@property (nonatomic, readonly) NSString *webBaseActionURL;

- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3;
- (id)attributionApps;
- (id)attributionURLs;
- (void)dealloc;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)providerID;
- (id)providerLogoPathForScale:(float)arg1;
- (id)providerName;
- (id)providerSnippetLogoPathForScale:(float)arg1;
- (BOOL)requiresAttributionInCallout;
- (id)webBaseActionURL;

@end
