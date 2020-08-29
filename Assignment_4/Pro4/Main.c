/*  4.Write a program which accept number from user and return summation of all its non factors. 
Input :  12 Output : 50  
Input :  10  Output : 37  
*/

#include "Header.h"
int main() 
{  
    int iValue = 0;  
    int iRet = 0; 
 
    printf("Enter number");  
    scanf("%d",&iValue); 
 
    iRet  = SumNonFact(iValue); 
 
    printf("%d",iRet); 
 
    return 0; 
}