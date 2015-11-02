//
//  FKFlickrTestEcho.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSUInteger, FKFlickrTestEchoError) {
	FKFlickrTestEchoError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrTestEchoError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrTestEchoError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrTestEchoError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrTestEchoError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrTestEchoError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrTestEchoError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrTestEchoError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

A testing method which echo's all parameters back in the response.


Response:

<method>echo</method>
<foo>bar</foo>

*/
@interface FKFlickrTestEcho : NSObject <FKFlickrAPIMethod>


@end
