#include "Header.h" 

BOOL ChkZero(int iNo) 
{ 
     int iDigit = 0;                           
    
    while(iNo != 0)  
    {   
        iDigit = iNo % 10 ;   
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;  
    } 
    return FALSE;
} 