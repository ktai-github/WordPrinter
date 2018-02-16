//
//  Printer.h
//  WordPrinter
//
//  Created by KevinT on 2018-02-15.
//  Copyright © 2018 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Printer;

@protocol PrinterDelegate

-(int)printer:(Printer *)printer numberOfTimesToPrint:(NSString *)word;
//-(int)printer2:(Printer *)printer numberOfTimesToPrint:(NSString *)word;
-(BOOL)shouldAddStar;

@end

@interface Printer : NSObject

@property (nonatomic, weak) id<PrinterDelegate> delegate;

-(void)printWord:(NSString *)word ;

@end


