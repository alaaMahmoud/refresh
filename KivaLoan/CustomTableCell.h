//
//  CustomTableCell.h
//  KivaLoan
//
//  Created by Simon on 5/7/14.
//  Copyright (c) 2014 Appcoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *loanName;
@property (weak, nonatomic) IBOutlet UILabel *loanCountry;
@property (weak, nonatomic) IBOutlet UILabel *loanUse;

@property (weak, nonatomic) IBOutlet UILabel *loanAmount;
@end
