//
//  main.c
//  BubbleSort
//
//  Created by KimJongHan on 2016. 2. 25..
//  Copyright © 2016년 KimJongHan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int num = rand() % 100 + 1;
    int pbArray [num];
    int temp;
    
    printf("%d\n", num);
    
    for(int index = 0; index < num; index++)
    {
        pbArray[index] = rand() % 100 + 1;
        
        printf("%d\t", pbArray[index]);
        
    }
    
    printf("\n");
    
    /*
    for(int index2 = 0; index2 < num; index2++)
    {
        for(int index = num-1; index > 0; index--)
        {
     
            if(pbArray[index] < pbArray[index-1])
            {
                temp = pbArray[index];

                pbArray[index] = pbArray[index -1];

                pbArray[index-1] = temp;

                
            }
            else
                continue;
        }

    }
    */
    
    
    
    for(int index2 = num-1; index2 > 0; index2--)
    {
        for(int index = 0; index < num-1; index++)
        {
            
            if(pbArray[index+1] < pbArray[index])
            {
                temp = pbArray[index+1];
                
                pbArray[index+1] = pbArray[index];
                
                pbArray[index] = temp;
                
                
            }
            else
                continue;
        }
        
    }
    
    for(int index = 0; index < num; index++)
    {
     
        printf("%d\t", pbArray[index]);
        
    }
    
    
    
    return 0;
}
