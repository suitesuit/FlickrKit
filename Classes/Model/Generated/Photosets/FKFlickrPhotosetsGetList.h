//
//  FKFlickrPhotosetsGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPhotosetsGetListError) {
	FKFlickrPhotosetsGetListError_UserNotFound = 1,		 /* The user NSID passed was not a valid user NSID and the calling user was not logged in.
 */
	FKFlickrPhotosetsGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns the photosets belonging to the specified user.

<p>Photosets are returned in the user's specified order, which may not mean the newest set is first. Applications displaying photosets should respect the user's ordering.</p>

Response:

<photosets page="1" pages="1" perpage="30" total="2" cancreate="1">
    <photoset id="72157626216528324" primary="5504567858" secret="017804c585" server="5174" farm="6" photos="22" videos="0" count_views="137" count_comments="0" can_comment="1" date_create="1299514498" date_update="1300335009">
      <title>Avis Blanche</title>
      <description>My Grandma's Recipe File.</description>
    </photoset>
    <photoset id="72157624618609504" primary="4847770787" secret="6abd09a292" server="4153" farm="5" photos="43" videos="12" count_views="523" count_comments="1" can_comment="1" date_create="1280530593" date_update="1308091378">
      <title>Mah Kittehs</title>
      <description>Sixty and Niner. Born on the 3rd of May, 2010, or thereabouts. Came to my place on Thursday, July 29, 2010.</description>
    </photoset>
</photosets>

*/
@interface FKFlickrPhotosetsGetList : NSObject <FKFlickrAPIMethod>

/* The NSID of the user to get a photoset list for. If none is specified, the calling user is assumed. */
@property (nonatomic, copy) NSString *user_id;

/* The page of results to get. Currently, if this is not provided, all sets are returned, but this behaviour may change in future. */
@property (nonatomic, copy) NSString *page;

/* The number of sets to get per page. If paging is enabled, the maximum number of sets per page is 500. */
@property (nonatomic, copy) NSString *per_page;

/* A comma-delimited list of extra information to fetch for the primary photo. Currently supported fields are: license, date_upload, date_taken, owner_name, icon_server, original_format, last_update, geo, tags, machine_tags, o_dims, views, media, path_alias, url_sq, url_t, url_s, url_m, url_o */
@property (nonatomic, copy) NSString *primary_photo_extras;


@end
