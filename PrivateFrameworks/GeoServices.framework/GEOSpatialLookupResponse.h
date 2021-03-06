/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _places;
    int  _statusCode;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic) int statusCode;

+ (Class)placeType;

- (int)StringAsStatusCode:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned int)arg1;
- (id)places;
- (unsigned int)placesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setPlaces:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
