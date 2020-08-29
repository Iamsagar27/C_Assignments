/*
4. Write a program which accept three numbers and print its multiplication.  

  Input :  5   4   7    Output :  140  
  Input :  5   0   7    Output :  35  
  Input :  5   0   0    Output :  5  
  Input :  0   0   0    Output :  0 
*/                                             
  
#include "Header.h"  

int main()   
{    
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;    
    
    printf("Please enter three numbers");    
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);    
    
    iRet = Multiply(iValue1, iValue2, iValue3);    
    
    printf("Multiplictaion is %d",iRet);    
    
    return 0;   
}


