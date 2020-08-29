#include "Header.h" 

int CountOdd(int iNo) 
{
    int iDigit =0;
    int iCnt=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 1)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
    
}