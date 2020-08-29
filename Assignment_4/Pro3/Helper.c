#include "Header.h"

void NonFact(int iNo) 
{
    int iCnt =0;

    if (iNo == 0)
    {
        return ;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(!(iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

} 