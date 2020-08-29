#include "Header.h" 

int CountRange(int iNo) 
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
        
        if((iDigit > 3)&&(iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;   
    }
    return iCnt;
} 