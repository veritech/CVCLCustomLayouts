//
//  MyCollectionViewLayout.h
//  CollectionViewSample
//
//  Created by 沢 辰洋 on 12/11/05.
//  Copyright (c) 2012年 ITmedia. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CVCLCoverFlowLayout : UICollectionViewLayout

/**
 *  The size of the header view
 */
@property (nonatomic, assign) CGSize referenceHeaderSize;

/**
 *  The size of the footer view
 */
@property (nonatomic, assign) CGSize referenceFooterSize;

/**
 *  The Y position modifier for the item, as a faction of the items height 
 */
@property (nonatomic, assign) CGFloat itemYPositionModifier;

@property (nonatomic, assign) CGSize cellSize;
@property (nonatomic, assign) CGFloat cellInterval;
@property (nonatomic, assign) BOOL reflection;

- (id)initWithCellSize:(CGSize)cellSize;
- (id)initWithCellSize:(CGSize)cellSize cellInterval:(CGFloat)cellInterval;

@end
