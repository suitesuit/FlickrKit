//
//  FKFlickrStatsGetCollectionDomains.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrStatsGetCollectionDomainsError) {
	FKFlickrStatsGetCollectionDomainsError_UserDoesNotHaveStats = 1,		 /* The user you have requested stats has not enabled stats on their account. */
	FKFlickrStatsGetCollectionDomainsError_NoStatsForThatDate = 2,		 /* No stats are available for the date requested. Flickr only keeps stats data for the last 28 days. */
	FKFlickrStatsGetCollectionDomainsError_InvalidDate = 3,		 /* The date provided could not be parsed */
	FKFlickrStatsGetCollectionDomainsError_CollectionNotFound = 4,		 /* The collection id was either invalid or was for a collection not owned by the calling user. */
	FKFlickrStatsGetCollectionDomainsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrStatsGetCollectionDomainsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrStatsGetCollectionDomainsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrStatsGetCollectionDomainsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrStatsGetCollectionDomainsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrStatsGetCollectionDomainsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrStatsGetCollectionDomainsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrStatsGetCollectionDomainsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrStatsGetCollectionDomainsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrStatsGetCollectionDomainsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrStatsGetCollectionDomainsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrStatsGetCollectionDomainsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrStatsGetCollectionDomainsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Get a list of referring domains for a collection

<p>There is one <code>&lt;domain&gt;</code> element for each referring domain, with attributes for the domain name and the number of views.</p>

<p>For details on the referrers coming from each domain listed you can call <a href="/services/api/flickr.stats.getCollectionReferrers.html">flickr.stats.getCollectionReferrers</a></p>

Response:

<domains page="1" perpage="25" pages="1" total="3">
	<domain name="images.search.yahoo.com" views="127" />
	<domain name="flickr.com" views="122" />
	<domain name="images.google.com" views="70" />
</domains>


*/
@interface FKFlickrStatsGetCollectionDomains : NSObject <FKFlickrAPIMethod>

/* Stats will be returned for this date. This should be in either be in YYYY-MM-DD or unix timestamp format.

A day according to Flickr Stats starts at midnight GMT for all users, and timestamps will automatically be rounded down to the start of the day. */
@property (nonatomic, copy) NSString *date; /* (Required) */

/* The id of the collection to get stats for. If not provided, stats for all collections will be returned. */
@property (nonatomic, copy) NSString *collection_id;

/* Number of domains to return per page. If this argument is omitted, it defaults to 25. The maximum allowed value is 100. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
