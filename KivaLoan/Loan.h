//
//  Loan.h
//  KivaLoan
//
//  Created by Simon on 6/7/14.
//  Copyright (c) 2014 Appcoda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Loan : NSObject
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *use;
@property (strong, nonatomic) NSNumber *amount;
@end
