//
//  FKFlickrGroupsLeave.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrGroupsLeaveError) {
	FKFlickrGroupsLeaveError_RequiredArgumentsMissing = 1,		 /* The group_id doesn't exist */
	FKFlickrGroupsLeaveError_GroupDoesNotExist = 2,		 /* The group by that ID does not exist */
	FKFlickrGroupsLeaveError_AccountIsNotInThatGroup = 3,		 /* The user is not a member of the group that was specified */
	FKFlickrGroupsLeaveError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGroupsLeaveError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsLeaveError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsLeaveError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsLeaveError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsLeaveError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsLeaveError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsLeaveError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsLeaveError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsLeaveError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsLeaveError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsLeaveError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsLeaveError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Leave a group.

<br /><br />If the user is the only administrator left, and there are other members, the oldest member will be promoted to administrator.

<br /><br />If the user is the last person in the group, the group will be deleted.




*/
@interface FKFlickrGroupsLeave : NSObject <FKFlickrAPIMethod>

/* The NSID of the Group to leave */
@property (nonatomic, copy) NSString *group_id; /* (Required) */

/* Delete all photos by this user from the group */
@property (nonatomic, copy) NSString *delete_photos;


@end
