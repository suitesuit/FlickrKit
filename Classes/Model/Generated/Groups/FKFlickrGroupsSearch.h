//
//  FKFlickrGroupsSearch.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrGroupsSearchError) {
	FKFlickrGroupsSearchError_NoTextPassed = 1,		 /* The required text argument was ommited. */
	FKFlickrGroupsSearchError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsSearchError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsSearchError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsSearchError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsSearchError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsSearchError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsSearchError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsSearchError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Search for groups. 18+ groups will only be returned for authenticated calls where the authenticated user is over 18.


Response:

<groups page="1" pages="14" perpage="5" total="67">
	<group nsid="3000@N02"
		name="Frito's Test Group" eighteenplus="0" /> 
	<group nsid="32825757@N00"
		name="Free for All" eighteenplus="0" /> 
	<group nsid="33335981560@N01"
		name="joly's mothers" eighteenplus="0" /> 
	<group nsid="33853651681@N01"
		name="Wintermute tower" eighteenplus="0" /> 
	<group nsid="33853651696@N01"
		name="Art and Literature Hoedown" eighteenplus="0" /> 
</groups>

*/
@interface FKFlickrGroupsSearch : NSObject <FKFlickrAPIMethod>

/* The text to search for. */
@property (nonatomic, copy) NSString *text; /* (Required) */

/* Number of groups to return per page. If this argument is ommited, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is ommited, it defaults to 1.  */
@property (nonatomic, copy) NSString *page;


@end
