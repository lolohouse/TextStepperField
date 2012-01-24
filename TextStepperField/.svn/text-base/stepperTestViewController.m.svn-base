//
//  stepperTestViewController.m
//  stepperTest
//
//  Created by Алексеев Владислав on 11.09.11.
//  Copyright 2011 beefon software. All rights reserved.
//

#import "stepperTestViewController.h"
#import "TextStepperField.h"

@implementation stepperTestViewController
@synthesize changeText;
@synthesize stepperLabel;

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    
    counter = 10;
    contador.Current = 33;
    contador.Step = 1;
    contador.Minimum=10;
    contador.Maximum = 40;
    contador.NumDecimals =3;
    contador.IsEditableTextField=FALSE;
    
    // don't care about width and height - they are always fixed
    TextStepperField *stepper = [[TextStepperField alloc] initWithFrame:CGRectMake(50, 100, 150, 40)];
    [stepper addTarget:self
                action:@selector(programmaticallyCreatedStepperDidStep:) 
      forControlEvents:UIControlEventValueChanged];
    [self.view addSubview:stepper];
}


- (void)viewDidUnload {
    [self setStepperLabel:nil];
    contador = nil;
    [self setChangeText:nil];
    [super viewDidUnload];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return YES;
}

- (void)programmaticallyCreatedStepperDidStep:(TextStepperField *)stepper {
    if (stepper.TypeChange == TextStepperFieldChangeKindNegative) {
        counter -= 10;
    }
    else {
        counter += 5;
    }
    
    self.stepperLabel.text = [NSString stringWithFormat:@"%d PR", counter];
}

- (IBAction)ibStepperDidStep:(id)sender {
    if (contador.TypeChange == TextStepperFieldChangeKindNegative) {
        counter--;
    }
    else {
        counter++;
    }
    
    self.stepperLabel.text = [NSString stringWithFormat:@"%d IB", counter];
}

- (IBAction)changeTexto:(id)sender {
}

- (IBAction)cambio:(id)sender {
}
@end
