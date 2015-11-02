//
//  FKFlickrPhotosSuggestionsSuggestLocation.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosSuggestionsSuggestLocationError) {
	FKFlickrPhotosSuggestionsSuggestLocationError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosSuggestionsSuggestLocationError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosSuggestionsSuggestLocationError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosSuggestionsSuggestLocationError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosSuggestionsSuggestLocationError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosSuggestionsSuggestLocationError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosSuggestionsSuggestLocationError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosSuggestionsSuggestLocationError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosSuggestionsSuggestLocationError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosSuggestionsSuggestLocationError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosSuggestionsSuggestLocationError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosSuggestionsSuggestLocationError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosSuggestionsSuggestLocationError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Suggest a geotagged location for a photo.




*/
@interface FKFlickrPhotosSuggestionsSuggestLocation : NSObject <FKFlickrAPIMethod>

/* The photo whose location you are suggesting. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* The latitude whose valid range is -90 to 90. Anything more than 6 decimal places will be truncated. */
@property (nonatomic, copy) NSString *lat; /* (Required) */

/* The longitude whose valid range is -180 to 180. Anything more than 6 decimal places will be truncated. */
@property (nonatomic, copy) NSString *lon; /* (Required) */

/* Recorded accuracy level of the location information. World level is 1, Country is ~3, Region ~6, City ~11, Street ~16. Current range is 1-16. Defaults to 16 if not specified. */
@property (nonatomic, copy) NSString *accuracy;

/* The WOE ID of the location used to build the location hierarchy for the photo. */
@property (nonatomic, copy) NSString *woe_id;

/* The Flickr Places ID of the location used to build the location hierarchy for the photo. */
@property (nonatomic, copy) NSString *place_id;

/* A short note or history to include with the suggestion. */
@property (nonatomic, copy) NSString *note;


@end
