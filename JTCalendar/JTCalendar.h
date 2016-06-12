//
//  JTCalendar.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import "JTCalendarViewDataSource.h"
#import "JTCalendarAppearance.h"

#import "JTCalendarMenuView.h"
#import "JTCalendarContentView.h"

#import "JTCalendarDataCache.h"

@class JTCalendar;

@protocol JTCalendarDelegate <NSObject>

@required
- (void)loadPreviousMonth;
- (void)loadNextMonth;

@end

@interface JTCalendar : NSObject<UIScrollViewDelegate>

@property (weak, nonatomic) JTCalendarMenuView *menuMonthsView;
@property (weak, nonatomic) JTCalendarContentView *contentView;

@property (weak, nonatomic) id<JTCalendarDataSource> dataSource;
@property (assign, nonatomic) id <JTCalendarDelegate> delegate;

@property (nonatomic) NSDate *currentDate;
@property (nonatomic) NSDate *currentDateSelected;

@property (nonatomic, readonly) JTCalendarDataCache *dataCache;
@property (nonatomic, readonly) JTCalendarAppearance *calendarAppearance;

- (void)reloadData;
- (void)reloadDataForDates:(NSArray *)dateArray;
- (void)reloadAppearance;

- (void)loadPreviousMonth DEPRECATED_MSG_ATTRIBUTE("Use loadPreviousPage instead");
- (void)loadNextMonth DEPRECATED_MSG_ATTRIBUTE("Use loadNextPage instead");

- (void)loadPreviousPage;
- (void)loadNextPage;

- (void)repositionViews;

@end
