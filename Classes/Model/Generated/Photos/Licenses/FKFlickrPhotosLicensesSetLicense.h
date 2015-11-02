//
//  FKFlickrPhotosLicensesSetLicense.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosLicensesSetLicenseError) {
	FKFlickrPhotosLicensesSetLicenseError_PhotoNotFound = 1,		 /* The specified id was not the id of a valif photo owner by the calling user. */
	FKFlickrPhotosLicensesSetLicenseError_LicenseNotFound = 2,		 /* The license id was not valid. */
	FKFlickrPhotosLicensesSetLicenseError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosLicensesSetLicenseError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosLicensesSetLicenseError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosLicensesSetLicenseError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosLicensesSetLicenseError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosLicensesSetLicenseError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosLicensesSetLicenseError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosLicensesSetLicenseError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosLicensesSetLicenseError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosLicensesSetLicenseError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosLicensesSetLicenseError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosLicensesSetLicenseError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosLicensesSetLicenseError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Sets the license for a photo.




*/
@interface FKFlickrPhotosLicensesSetLicense : NSObject <FKFlickrAPIMethod>

/* The photo to update the license for. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* The license to apply, or 0 (zero) to remove the current license. Note : as of this writing the "no known copyright restrictions" license (7) is not a valid argument. */
@property (nonatomic, copy) NSString *license_id; /* (Required) */


@end
