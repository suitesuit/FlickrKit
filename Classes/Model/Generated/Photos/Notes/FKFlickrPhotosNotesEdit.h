//
//  FKFlickrPhotosNotesEdit.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosNotesEditError) {
	FKFlickrPhotosNotesEditError_NoteNotFound = 1,		 /* The note id passed was not a valid note id */
	FKFlickrPhotosNotesEditError_UserCannotEditNote = 2,		 /* The calling user does not have permission to edit the specified note */
	FKFlickrPhotosNotesEditError_MissingRequiredArguments = 3,		 /* One or more of the required arguments were not supplied. */
	FKFlickrPhotosNotesEditError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosNotesEditError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosNotesEditError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosNotesEditError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosNotesEditError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosNotesEditError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosNotesEditError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosNotesEditError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosNotesEditError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosNotesEditError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosNotesEditError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosNotesEditError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosNotesEditError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Edit a note on a photo. Coordinates and sizes are in pixels, based on the 500px image size shown on individual photo pages.





*/
@interface FKFlickrPhotosNotesEdit : NSObject <FKFlickrAPIMethod>

/* The id of the note to edit */
@property (nonatomic, copy) NSString *note_id; /* (Required) */

/* The left coordinate of the note */
@property (nonatomic, copy) NSString *note_x; /* (Required) */

/* The top coordinate of the note */
@property (nonatomic, copy) NSString *note_y; /* (Required) */

/* The width of the note */
@property (nonatomic, copy) NSString *note_w; /* (Required) */

/* The height of the note */
@property (nonatomic, copy) NSString *note_h; /* (Required) */

/* The description of the note */
@property (nonatomic, copy) NSString *note_text; /* (Required) */


@end
