/*1.Write a program which accept number from user and return the count of even digits. 
Input :  2395  Output :  1 
Input :  1018 Output :  2 
Input :  -1018 Output :  2 
Input :  8462 Output :  4 
*/

#include "Header.h"

int main() 
{  
    int iValue = 0;  
    int iRet = 0; 
 
    printf("Enter number");  
    scanf("%d",&iValue); 
 
    iRet = CountEven(iValue); 
 
    printf("%d",iRet); 
 
    return 0; 
}