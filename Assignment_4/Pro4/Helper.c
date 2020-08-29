#include "Header.h"

int SumNonFact(int iNo) 
{
    int iCnt =0;
    int iSum = 0;
    
    if (iNo == 0)
    {
        return 0;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(!(iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
 
} 