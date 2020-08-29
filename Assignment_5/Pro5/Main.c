/*
5. Write a program which accept total marks & obtained marks from user and calculate percentage.  
 
Input :  1000  745    Output :  74.5%  
*/

#include "Header.h"
  
int main()   
{    
    int iValue1 = 0,iValue2 = 0;    
    double dRet = 0.0; 
   
    printf("Please enter total marks");    
    scanf("%d",&iValue1);    
    
    printf("Please enter obtained marks");    
    scanf("%d",&iValue2);    
    
    dRet = Percentage(iValue1, iValue2);    
    
    printf("%lf" ,dRet);    
    
    return 0;   
}
