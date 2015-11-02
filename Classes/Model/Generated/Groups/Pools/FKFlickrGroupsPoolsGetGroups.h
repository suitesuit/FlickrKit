//
//  FKFlickrGroupsPoolsGetGroups.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrGroupsPoolsGetGroupsError) {
	FKFlickrGroupsPoolsGetGroupsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGroupsPoolsGetGroupsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsPoolsGetGroupsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsPoolsGetGroupsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsPoolsGetGroupsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsPoolsGetGroupsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsPoolsGetGroupsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsPoolsGetGroupsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsPoolsGetGroupsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsPoolsGetGroupsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsPoolsGetGroupsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsPoolsGetGroupsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsPoolsGetGroupsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns a list of groups to which you can add photos.

<p>The <code>privacy</code> attribute is 1 for private groups, 2 for invite-only public groups and 3 for open public groups.</p>

Response:

<groups page="1" pages="1" per_page="400" total="3">
	<group nsid="33853651696@N01" name="Art and Literature Hoedown"
		admin="0" privacy="3" photos="2" iconserver="1" /> 
	<group nsid="34427465446@N01" name="FlickrIdeas"
		admin="1" privacy="3" photos="20" iconserver="1" /> 
	<group nsid="34427465497@N01" name="GNEverybody"
		admin="0" privacy="3" photos="4" iconserver="1" /> 
</groups>

*/
@interface FKFlickrGroupsPoolsGetGroups : NSObject <FKFlickrAPIMethod>

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;

/* Number of groups to return per page. If this argument is omitted, it defaults to 400. The maximum allowed value is 400. */
@property (nonatomic, copy) NSString *per_page;


@end
