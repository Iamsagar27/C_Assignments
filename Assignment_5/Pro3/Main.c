/* 3. Write a program which accept two numbers and check whether numbers are equal or not.  
 
Input : 10 10    Output : Equal    
Input : 10 12    Output : Not Equal   
Input : 10 -10    Output : Not Equal 
*/

#include "Header.h"

int main()   
{    
    int iValue1 = 0,iValue2 = 0;    
    BOOL bRet = FALSE; 
   
    printf("Please enter two numbers");    
    scanf("%d %d",&iValue1, &iValue2);    
    
    bRet = ChkEqual(iValue1, iValue2);    
    
    if(bRet == TRUE)    
    {     
        printf("Equal");    
    }    
    else    
    {     
        printf("Not Equal");    
    }    
    return 0;   
}