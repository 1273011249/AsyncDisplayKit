//
//  ASCollectionElement.h
//  AsyncDisplayKit
//
//  Created by Huy Nguyen on 2/28/16.
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//

#import <AsyncDisplayKit/ASDataController.h>
#import <AsyncDisplayKit/ASTraitCollection.h>

NS_ASSUME_NONNULL_BEGIN

AS_SUBCLASSING_RESTRICTED
@interface ASCollectionElement : NSObject

- (instancetype)initWithNodeBlock:(ASCellNodeBlock)nodeBlock kind:(NSString *)kind;

@property (readonly, copy) NSString *kind;

/**
 * @return The node, running the node block if necessary. The node block will be discarded
 * after the first time it is run.
 */
@property (strong, readonly) ASCellNode *node;

/**
 * @return The node, if the node block has been run already.
 */
@property (strong, readonly, nullable) ASCellNode *nodeIfAllocated;

@end

NS_ASSUME_NONNULL_END
