//
//  FKFlickrPhotosetsAddPhoto.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosetsAddPhotoError) {
	FKFlickrPhotosetsAddPhotoError_PhotosetNotFound = 1,		 /* The photoset id passed was not the id of avalid photoset owned by the calling user. */
	FKFlickrPhotosetsAddPhotoError_PhotoNotFound = 2,		 /* The photo id passed was not the id of a valid photo owned by the calling user. */
	FKFlickrPhotosetsAddPhotoError_PhotoAlreadyInSet = 3,		 /* The photo is already a member of the photoset. */
	FKFlickrPhotosetsAddPhotoError_MaximumNumberOfPhotosInSet = 10,		 /* A set has reached the upper limit for the number of photos allowed. */
	FKFlickrPhotosetsAddPhotoError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosetsAddPhotoError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsAddPhotoError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsAddPhotoError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsAddPhotoError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsAddPhotoError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsAddPhotoError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsAddPhotoError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsAddPhotoError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsAddPhotoError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsAddPhotoError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsAddPhotoError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsAddPhotoError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Add a photo to the end of an existing photoset.




*/
@interface FKFlickrPhotosetsAddPhoto : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to add a photo to. */
@property (nonatomic, copy) NSString *photoset_id; /* (Required) */

/* The id of the photo to add to the set. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */


@end
