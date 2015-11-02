//
//  FKFlickrGalleriesEditPhotos.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrGalleriesEditPhotosError) {
	FKFlickrGalleriesEditPhotosError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGalleriesEditPhotosError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGalleriesEditPhotosError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGalleriesEditPhotosError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGalleriesEditPhotosError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGalleriesEditPhotosError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGalleriesEditPhotosError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGalleriesEditPhotosError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGalleriesEditPhotosError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGalleriesEditPhotosError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGalleriesEditPhotosError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGalleriesEditPhotosError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGalleriesEditPhotosError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Modify the photos in a gallery. Use this method to add, remove and re-order photos.




*/
@interface FKFlickrGalleriesEditPhotos : NSObject <FKFlickrAPIMethod>

/* The id of the gallery to modify. The gallery must belong to the calling user. */
@property (nonatomic, copy) NSString *gallery_id; /* (Required) */

/* The id of the photo to use as the 'primary' photo for the gallery. This id must also be passed along in photo_ids list argument. */
@property (nonatomic, copy) NSString *primary_photo_id; /* (Required) */

/* A comma-delimited list of photo ids to include in the gallery. They will appear in the set in the order sent. This list must contain the primary photo id. This list of photos replaces the existing list. */
@property (nonatomic, copy) NSString *photo_ids; /* (Required) */


@end
