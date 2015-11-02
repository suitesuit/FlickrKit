//
//  FKFlickrPlacesGetChildrenWithPhotosPublic.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrPlacesGetChildrenWithPhotosPublicError) {
	FKFlickrPlacesGetChildrenWithPhotosPublicError_RequiredParameterMissing = 1,		 /* One or more required parameter is missing from the API call. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_NotAValidPlacesID = 2,		 /* An invalid Places (or WOE) ID was passed with the API call. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_PlaceNotFound = 3,		 /* No place could be found for the Places (or WOE) ID passed to the API call. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPlacesGetChildrenWithPhotosPublicError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Return a list of locations with public photos that are parented by a Where on Earth (WOE) or Places ID.


Response:

<places total="79">
   <place place_id="HznQfdKbB58biy8sdA" woeid="26332794"
      latitude="45.498" longitude="-73.575"
      place_url="/Canada/Quebec/Montreal  /Montreal+Golden+Square+Mile"
      place_type="neighbourhood" photo_count="2717">
      Montreal Golden Square Mile, Montreal, QC, CA, Canada
   </place>
   <place place_id="K1rYWmGbB59rwn7lOA" woeid="26332799"
      latitude="45.502" longitude="-73.578"
      place_url="/Canada/Quebec/Montreal/Downtown+Montr%C3%A9al"
      place_type="neighbourhood" photo_count="2317">
      Downtown Montréal, Montreal, QC, CA, Canada
  </place>

   <!-- and so on... -->

</places>

*/
@interface FKFlickrPlacesGetChildrenWithPhotosPublic : NSObject <FKFlickrAPIMethod>

/* A Flickr Places ID. (While optional, you must pass either a valid Places ID or a WOE ID.) */
@property (nonatomic, copy) NSString *place_id;

/* A Where On Earth (WOE) ID. (While optional, you must pass either a valid Places ID or a WOE ID.) */
@property (nonatomic, copy) NSString *woe_id;


@end
