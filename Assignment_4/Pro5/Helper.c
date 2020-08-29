#include "Header.h"

int FactDiff(int iNo) 
{
    int iCnt =0;
    int iSum = 0;
    int iSum1 = 0;
    
    if (iNo == 0)
    {
        return 0;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if((!(iNo % iCnt) == 0))
        {
            iSum1 = iSum1 + iCnt;
        }
    }

    
    return iSum - iSum1;
} 