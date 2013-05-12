//
// Created by azu on 2013/05/05.
//


#import <Foundation/Foundation.h>

@class GHNotification;


@interface MessageListDataController : NSObject
@property(nonatomic, strong) NSArray *dataList;
@property(nonatomic, strong) NSArray *old_dataList;

@property(nonatomic) NSUInteger selectedIndex;

- (NSUInteger)countInList;

- (GHNotification *)objectInListForIdentifier:(NSString *) identifier;

- (GHNotification *)objectInListAtIndex:(NSUInteger) theIndex;

- (void)reloadDataSource;

- (NSArray *)diffData;
@end