//
//  stepperTestViewController.h
//  stepperTest
//
//  Created by Алексеев Владислав on 11.09.11.
//  Copyright 2011 beefon software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TextStepperField;

@interface stepperTestViewController : UIViewController {
    NSInteger counter;
    
    IBOutlet TextStepperField *contador;
    UILabel *stepperLabel;
}

@property (nonatomic, retain) IBOutlet UILabel *stepperLabel;

- (IBAction)ibStepperDidStep:(TextStepperField *)sender;
@property (retain, nonatomic) IBOutlet UITextField *changeText;
- (IBAction)changeTexto:(id)sender;
- (IBAction)cambio:(id)sender;

@end
