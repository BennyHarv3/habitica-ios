//
//  ShopItem+CoreDataClass.h
//  Habitica
//
//  Created by Phillip Thelen on 14/02/2017.
//  Copyright © 2017 Phillip Thelen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "ShopCategory.h"


NS_ASSUME_NONNULL_BEGIN

@interface ShopItem : NSManagedObject

- (NSString *)readableUnlockCondition;
- (BOOL)canBuy:(NSNumber *)currencyAmount;

@end

NS_ASSUME_NONNULL_END

#import "ShopItem+CoreDataProperties.h"
