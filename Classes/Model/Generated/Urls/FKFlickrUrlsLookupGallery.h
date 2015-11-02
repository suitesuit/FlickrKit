//
//  FKFlickrUrlsLookupGallery.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrUrlsLookupGalleryError) {
	FKFlickrUrlsLookupGalleryError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrUrlsLookupGalleryError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrUrlsLookupGalleryError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrUrlsLookupGalleryError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrUrlsLookupGalleryError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrUrlsLookupGalleryError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrUrlsLookupGalleryError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrUrlsLookupGalleryError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns gallery info, by url.

This is the same format returned by <a href="http://www.flickr.com/services/api/flickr.galleries.getInfo.html">flickr.galleries.getInfo</a>.

Response:

<gallery id="6065-72157617483228192" url="/photos/straup/galleries/72157617483228192" owner="35034348999@N01" 
primary_photo_id="292882708" 
date_create="1241028772" date_update="1270111667" 
count_photos="17" count_videos="0" server="112" farm="1" secret="7f29861bc4">
	<title>Cat Pictures I've Sent To Kevin Collins</title>
	<description />
</gallery>

*/
@interface FKFlickrUrlsLookupGallery : NSObject <FKFlickrAPIMethod>

/* The gallery's URL. */
@property (nonatomic, copy) NSString *url; /* (Required) */


@end
