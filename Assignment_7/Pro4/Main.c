/*
4.Write a program which accept number from user and return multiplication of all digits. 
Input :  2395  Output :  270 
Input :  1018 Output :  8 
Input :  9440 Output :  144 
Input :  922432 Output :  864 
*/

#include "Header.h"

int main() 
{  
    int iValue = 0;  
    int iRet = 0; 

    printf("Enter number");  
    scanf("%d",&iValue); 
 
    iRet = MultDigits(iValue); 
 
    printf("%d",iRet);    
    
    return 0; 
} 