#include "Header.h" 

int CountFour(int iNo) 
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
        
        if(iDigit== 4)
        iCnt++;

        iNo = iNo / 10;   
    }
    return iCnt;  
}