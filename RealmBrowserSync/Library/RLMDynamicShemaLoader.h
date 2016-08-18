//
//  RLMDynamicShemaLoader.h
//  RealmBrowser
//
//  Created by Dmitry Obukhov on 17/08/16.
//  Copyright © 2016 Realm inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^RLMSchemaLoadCompletionHandler)(NSError *error);

@interface RLMDynamicShemaLoader : NSObject

- (void)loadSchemaFromSyncURL:(NSURL *)syncURL accessToken:(NSString *)accessToken toRealmFileURL:(NSURL *)fileURL completionHandler:(RLMSchemaLoadCompletionHandler)handler;

@end
