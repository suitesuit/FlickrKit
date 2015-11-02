//
//  FKFlickrPhotosetsCommentsDeleteComment.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosetsCommentsDeleteCommentError) {
	FKFlickrPhotosetsCommentsDeleteCommentError_CommentNotFound = 2,		 /* The comment id passed was not a valid comment id */
	FKFlickrPhotosetsCommentsDeleteCommentError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosetsCommentsDeleteCommentError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsCommentsDeleteCommentError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsCommentsDeleteCommentError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsCommentsDeleteCommentError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsCommentsDeleteCommentError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsCommentsDeleteCommentError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsCommentsDeleteCommentError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsCommentsDeleteCommentError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsCommentsDeleteCommentError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsCommentsDeleteCommentError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsCommentsDeleteCommentError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsCommentsDeleteCommentError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Delete a photoset comment as the currently authenticated user.




*/
@interface FKFlickrPhotosetsCommentsDeleteComment : NSObject <FKFlickrAPIMethod>

/* The id of the comment to delete from a photoset. */
@property (nonatomic, copy) NSString *comment_id; /* (Required) */


@end
