/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOPDSource, GEOPDAttribution;

@interface GEOPDComponent : PBCodable <NSCopying> {
    double _timestampFirstSeen;
    GEOPDAttribution *_attribution;
    int _cacheControl;
    GEOPDSource *_source;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    NSMutableArray *_values;
    int _valuesAvailable;
    unsigned int _version;
    NSMutableArray *_versionDomains;
    struct { 
        unsigned int timestampFirstSeen : 1; 
        unsigned int cacheControl : 1; 
        unsigned int startIndex : 1; 
        unsigned int status : 1; 
        unsigned int ttl : 1; 
        unsigned int type : 1; 
        unsigned int valuesAvailable : 1; 
        unsigned int version : 1; 
    } _has;
}

@property bool hasTimestampFirstSeen;
@property double timestampFirstSeen;
@property bool hasType;
@property int type;
@property bool hasStatus;
@property int status;
@property bool hasTtl;
@property unsigned int ttl;
@property bool hasStartIndex;
@property int startIndex;
@property bool hasValuesAvailable;
@property int valuesAvailable;
@property(readonly) bool hasAttribution;
@property(retain) GEOPDAttribution * attribution;
@property(retain) NSMutableArray * values;
@property(retain) NSMutableArray * versionDomains;
@property bool hasVersion;
@property unsigned int version;
@property(readonly) bool hasSource;
@property(retain) GEOPDSource * source;
@property bool hasCacheControl;
@property int cacheControl;


- (bool)hasStatus;
- (void)setHasTimestampFirstSeen:(bool)arg1;
- (int)valuesAvailable;
- (void)setHasVersion:(bool)arg1;
- (bool)hasValuesAvailable;
- (void)setHasValuesAvailable:(bool)arg1;
- (void)setValuesAvailable:(int)arg1;
- (bool)hasStartIndex;
- (void)setHasStartIndex:(bool)arg1;
- (bool)hasTtl;
- (void)setHasTtl:(bool)arg1;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (void)clearVersionDomains;
- (unsigned long long)versionDomainsCount;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (void)addVersionDomain:(id)arg1;
- (void)setVersionDomains:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)setTimestampFirstSeen:(double)arg1;
- (bool)hasTimestampFirstSeen;
- (id)attribution;
- (bool)hasAttribution;
- (bool)hasSource;
- (bool)hasVersion;
- (double)timestampFirstSeen;
- (id)versionDomains;
- (unsigned int)ttl;
- (void)setHasStatus:(bool)arg1;
- (int)cacheControl;
- (bool)hasCacheControl;
- (void)setHasCacheControl:(bool)arg1;
- (void)setCacheControl:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setTtl:(unsigned int)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (void)setStartIndex:(int)arg1;
- (int)startIndex;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (id)source;
- (void)setStatus:(int)arg1;
- (int)status;
- (unsigned int)version;
- (void)setSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (void)addValue:(id)arg1;

@end
