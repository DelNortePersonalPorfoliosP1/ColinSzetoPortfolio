//
//  histogram.c
//  Lab2
//
//  Created by Szeto, Colin on 9/19/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//
#include <math.h>

#include "histogram.h"

int histogram(void){
    
    //intitilizing the varibles we will be defining
    //double value1;
    /*double value2;
    double value3;
    double value4;
    double value5;
    double value6;
    double value7;
    double value8;
    double value9;
    double value10;*/

    float mark[9];
    
    double value0;
    


    
    //ui that the user is shown
    printf("=====================================\n");
    printf("|   HISTOGRAM LAB)\n");
    printf("=====================================\n");
    printf("|   PLEASE ENTER NUMBER)\n");
    
    printf("proide number for value 0\n");
    scanf ("%f", &mark[0]);
 /*   printf("proide number for value 2\n");
    scanf ("%f", &mark[1]);
    printf("proide number for value 3\n");
    scanf ("%f", &mark[2]);
    printf("proide number for value 4\n");
    scanf ("%f", &mark[3]);
    printf("proide number for value 5\n");
    scanf ("%f", &mark[4]);
    printf("proide number for value 6\n");
    scanf ("%f", &mark[5]);
    printf("proide number for value 7\n");
    scanf ("%f", &mark[6]);
    printf("proide number for value 8\n");
    scanf ("%f", &mark[7]);
    printf("proide number for value 9\n");
    scanf ("%f", &mark[8]);
    printf("proide number for value 10\n");
    scanf ("%f", &mark[9]);
    */
    
    value0 = round(mark[0]);
                   
    printf("%lf",&value0);
              
    
    return (0);
}
