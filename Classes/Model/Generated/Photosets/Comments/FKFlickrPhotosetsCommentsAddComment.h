//
//  FKFlickrPhotosetsCommentsAddComment.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosetsCommentsAddCommentError_PhotosetNotFound = 1,		 /*  */
	FKFlickrPhotosetsCommentsAddCommentError_BlankComment = 8,		 /*  */
	FKFlickrPhotosetsCommentsAddCommentError_UserIsPostingCommentsTooFast = 9,		 /* The user has reached the limit for number of comments posted during a specific time period. Wait a bit and try again. */
	FKFlickrPhotosetsCommentsAddCommentError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsCommentsAddCommentError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsCommentsAddCommentError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsCommentsAddCommentError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsCommentsAddCommentError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsCommentsAddCommentError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsCommentsAddCommentError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsCommentsAddCommentError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsCommentsAddCommentError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsCommentsAddCommentError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsCommentsAddCommentError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosetsCommentsAddCommentError;

/*

Add a comment to a photoset.


Response:

<comment id="97777-12492-72057594037942601" />

*/
@interface FKFlickrPhotosetsCommentsAddComment : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to add a comment to. */
@property (nonatomic, strong) NSString *photoset_id; /* (Required) */

/* Text of the comment */
@property (nonatomic, strong) NSString *comment_text; /* (Required) */


@end