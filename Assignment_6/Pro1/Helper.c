#include "Header.h"

void DisplayDigit(int iNo) 
{  
    int iDigit = 0;    
    
    if(iNo < 0)  
    {   
        iNo = -iNo;  
    }

    while(iNo != 0)  
    {   
        iDigit = iNo % 10 ;   
        printf("%d",iDigit);   
        iNo = iNo / 10;  
    } 
} 
