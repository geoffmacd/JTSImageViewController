//
//  JTSSimpleImageDownloader.h
//  
//
//  Created by Jared Sinclair on 3/2/14.
//  Copyright (c) 2014 Nice Boy LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JTSSimpleImageDownloader : NSObject

+ (NSURLSessionDataTask *)downloadImageForURL:(NSString *)imageURL
                                 canonicalURL:(NSString *)canonicalURL
                                   completion:(void(^)(UIImage *image))completion;

@end