//
//  HulkCalendarCell.h
//  FSCalendarExample
//
//  Created by didi on 2019/5/13.
//  Copyright © 2019 wenchaoios. All rights reserved.
//

#import <FSCalendar/FSCalendar.h>

NS_ASSUME_NONNULL_BEGIN

@interface HulkCalendarCell : FSCalendarCell

// The start/end of the range
@property (weak, nonatomic) CALayer *selectionLayer;

// The middle of the range
@property (weak, nonatomic) CALayer *middleLayer;
@end

NS_ASSUME_NONNULL_END
