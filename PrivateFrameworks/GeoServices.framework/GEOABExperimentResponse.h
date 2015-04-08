/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOABExperimentResponse : PBCodable <NSCopying> {
    NSMutableArray *_assignments;
    struct { 
        unsigned int refreshIntervalSeconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int invalidatePoiCache : 1; 
        unsigned int invalidateTileCache : 1; 
    } _has;
    BOOL _invalidatePoiCache;
    BOOL _invalidateTileCache;
    unsigned long long _refreshIntervalSeconds;
    NSString *_requestGuid;
    NSString *_sourceURL;
    double _timestamp;
}

@property(retain) NSMutableArray * assignments;
@property BOOL hasInvalidatePoiCache;
@property BOOL hasInvalidateTileCache;
@property BOOL hasRefreshIntervalSeconds;
@property(readonly) BOOL hasRequestGuid;
@property(readonly) BOOL hasSourceURL;
@property BOOL hasTimestamp;
@property BOOL invalidatePoiCache;
@property BOOL invalidateTileCache;
@property unsigned long long refreshIntervalSeconds;
@property(retain) NSString * requestGuid;
@property(retain) NSString * sourceURL;
@property double timestamp;

- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (void)addAssignment:(id)arg1;
- (id)assignmentAtIndex:(unsigned int)arg1;
- (id)assignments;
- (unsigned int)assignmentsCount;
- (void)clearAssignments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInvalidatePoiCache;
- (BOOL)hasInvalidateTileCache;
- (BOOL)hasRefreshIntervalSeconds;
- (BOOL)hasRequestGuid;
- (BOOL)hasSourceURL;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)invalidatePoiCache;
- (BOOL)invalidateTileCache;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)refreshIntervalSeconds;
- (id)requestGuid;
- (void)setAssignments:(id)arg1;
- (void)setHasInvalidatePoiCache:(BOOL)arg1;
- (void)setHasInvalidateTileCache:(BOOL)arg1;
- (void)setHasRefreshIntervalSeconds:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInvalidatePoiCache:(BOOL)arg1;
- (void)setInvalidateTileCache:(BOOL)arg1;
- (void)setRefreshIntervalSeconds:(unsigned long long)arg1;
- (void)setRequestGuid:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end