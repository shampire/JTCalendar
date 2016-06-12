//
//  JTCalendarDayView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import "JTCalendar.h"
#import "Calendar.h"

@interface JTCalendarDayView : UIView

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (nonatomic) NSDate *date;
@property (assign, nonatomic) BOOL isOtherMonth;
@property (assign, nonatomic) BOOL isWeekendOrHoliday;
@property (strong, nonatomic) Calendar *calendar;

- (void)reloadData;
- (void)reloadAppearance;

@end
