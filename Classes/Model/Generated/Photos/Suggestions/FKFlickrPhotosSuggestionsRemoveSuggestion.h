//
//  FKFlickrPhotosSuggestionsRemoveSuggestion.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosSuggestionsRemoveSuggestionError) {
	FKFlickrPhotosSuggestionsRemoveSuggestionError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosSuggestionsRemoveSuggestionError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Remove a suggestion, made by the calling user, from a photo.




*/
@interface FKFlickrPhotosSuggestionsRemoveSuggestion : NSObject <FKFlickrAPIMethod>

/* The unique ID for the location suggestion to approve. */
@property (nonatomic, copy) NSString *suggestion_id; /* (Required) */


@end
