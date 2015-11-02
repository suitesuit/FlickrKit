//
//  FKFlickrPhotosDelete.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosDeleteError) {
	FKFlickrPhotosDeleteError_PhotoNotFound = 1,		 /* The photo id was not the id of a photo belonging to the calling user. */
	FKFlickrPhotosDeleteError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosDeleteError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosDeleteError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosDeleteError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosDeleteError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosDeleteError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosDeleteError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosDeleteError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosDeleteError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosDeleteError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosDeleteError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosDeleteError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosDeleteError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Delete a photo from flickr.




*/
@interface FKFlickrPhotosDelete : NSObject <FKFlickrAPIMethod>

/* The id of the photo to delete. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */


@end
