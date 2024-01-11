// This is a 'C' program to print all natural numbers from users range using recursion.

/*
 Example output:
    Input lower limit : 1
    Input upper limit : 12
 ----------------------------
    Natural numbers between 1 to 12 : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    ! ! ! THE PROGRAM ENDS ! ! !
 
 */

//Created by Mehmet Akif Duran, January 11, 2024.
#include <stdio.h>

void printNatural(int, int); //function prototype.


int main(void){ //beginnig of the main funciton.
    
    //Variable Decleration(s).
    
    int lowerLimit, upperLimit;
    int temp = 0;
    
    //Executable Statement(s).
    
     // getting inputs.
    printf("Input the lower limit : \n");
        scanf("%d", &lowerLimit);
    printf("Input the upper limit : \n");
        scanf("%d", &upperLimit);
    
    //changing operaiton for the wrong limit input.
    
    if(lowerLimit>upperLimit)
    {
        temp = lowerLimit;
        lowerLimit = upperLimit;
        upperLimit = temp;
    }
    
    printf("----------------\n");
    printf("The natural numbers between %d and %d : ", lowerLimit,upperLimit);
    
    //function call.
    printNatural(lowerLimit, upperLimit);

    printf("\n");
    printf("! ! ! PROGRAM ENDS ! ! !\n");
    
    return 0;
}  //end of the main funciton.



void printNatural(int lowNum, int upNum){
    
    //Variable Decleration(s).
    
    int count;
    
    //Executable Statement(s).

    if(upNum<=lowNum){
        return;
    }
    
    printf("%d, ", lowNum);
    
    printNatural(lowNum+1,upNum);
}
