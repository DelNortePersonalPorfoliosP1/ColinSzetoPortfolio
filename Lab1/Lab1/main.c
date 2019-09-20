//
//  main.c
//  Lab1
//
//  Created by Szeto, Colin on 9/13/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include <stdio.h>

#include "Pythag.h"
#include "TimeCon.h"
#include "menu.h"


int main(int argc, const char * argv[]) {
    
    int input1 = 3;
    
    // will run the loop for a couple of repetitions this will ensure an auto shutdown to "timeout the code"
    int i;
    for (i=1; i<=2; )
        {
                if(input1 == 1)
                {
                    //will exucute the time conversion program when 1 is pressed
                    Pythag();

                    
                }
                if(input1 == 2)
                {
                    //will exucute the Pytha program when 2 is pressed
                    TimeCon();

                }
                else
                {
                    //defalt running (if 1,2,3 are not pressed)
                    menu();
                    scanf ("%d", &input1);
                }
            if (input1 ==3)
            {

                break;//exits the progam if the iput of user i 3
            }
    };
    
return 0;
}
