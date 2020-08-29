#include "Header.h"

int Count(int iNo) 
{ 
    int iDigit = 0;
     int iCnt = 0;    
    
    if(iNo < 0)  
    {   
        iNo = -iNo;  
    }

   while(iNo != 0)  
    {   
        iDigit = iNo % 10 ;   
        
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;   
    }
    return iCnt;
} 