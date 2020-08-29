/*
3.Write a program which accept number from user and count frequency of 2 in it. 
Input :  2395  Output :  1 
Input :  1018 Output :  0 
Input :  9000 Output :  0 
Input :  922432 Output :  3 
*/ 

#include "Header.h"
int main() 
{  
    int iValue = 0;  
    int iRet = 0; 
 
    printf("Enter number");  
    scanf("%d",&iValue); 

    iRet = CountTwo(iValue); 
                                                     
    printf("%d",iRet);
        
    return 0; 
}