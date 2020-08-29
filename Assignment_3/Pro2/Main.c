/*
    2. Write a program which accept number from user and print even factors of that number.  
Input :  24 
Output:  1 2 4 6 8 12 
*/
#include "Header.h"

int main() 
{  
    int iValue = 0;    
    printf("Enter number\n"); 
    scanf("%d",&iValue); 
    DisplayFactor(iValue); 
    return 0; 
} 