#include "Header.h" 

int CountEven(int iNo) 
{
    int iCnt = 0;                           
    int iDigit = 0;                         
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
} 
