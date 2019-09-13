//
//  TimeCon.c
//  Lab1
//
//  Created by Szeto, Colin on 9/13/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "TimeCon.h"
#include <stdio.h>
#include <math.h>

int TimeCon(void) {
    
    long time, days, hours, minutes, seconds; //asking for 8 bytes of data
    
    printf("In this lab, we will be converting seconds into days, hours, minute, seconds format\n");//defining what the lab is
    
    
    printf ("how many seconds");
    scanf ("%ld", &time);//assigning the input to the cariable
    
    days = (time / 86400);// converitng seconds to days
    hours = ((time % 86400)/ 3600);// calculating the extra hours
    minutes = (((time % 86400) % 3600)/60);// calculating the extra minutes
    seconds = ((((time % 86400) % 3600)%60));//calculating the extra seconds
    printf ("Days- %ld\nHours- %ld\nMinutes- %ld\nSeconds- %ld\n", days, hours, minutes, seconds);//output of all of the varibles that were to be assigned
    
    return 0;
}
