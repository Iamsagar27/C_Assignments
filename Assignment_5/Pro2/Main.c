/*2.  Write a program which accept one number from user and check whether that number is greater than 100 or not.  

  Input : 101    Output : Greater  
 Input : 39    Output : Smaller 
  
 */ 
  
#include "Header.h"
int main()   
{    
    int iValue = 0;    
    BOOL bRet = FALSE;    
    
    printf("Please enter number");    
    scanf("%d",&iValue);    
    
    bRet = ChkGreater(iValue);    
    
    if(bRet==TRUE)    
    {     
        printf("Greater");    
    }    
    else    
    {     
        printf("Smaller");    
    }    
    return 0; 
}