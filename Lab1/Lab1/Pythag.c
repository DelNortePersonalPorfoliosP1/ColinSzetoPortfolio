//
//  Pythag.c
//  Lab1
//
//  Created by Szeto, Colin on 9/13/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "Pythag.h"
#include <math.h>

int Pythag(void) {
    
    double side1;
    double side2;
    
    printf("In this lab, we will be calculating the side lengths of a hypotonuse\n");//asking for side length 1
    printf("side1");//asking for side length 1
    scanf("%lf",&side1);
    
    printf("side2");//asking for side length 2
    scanf("%lf",&side2);
    
    double side3 = sqrt(side1*side1 + side2*side2); //computation of the hypotonuse (defining the side 3 is equal to the values of a^2 + b^2
    printf ("the hypotenuse is %lf\n",side3);
    
    return 0;
}
