#include "Header.h"   

int Multiply(int iNo1, int iNo2, int iNo3)   
{
    if((iNo1 || iNo2 || iNo3)==0)
    {
        return 0;
    }

    if((iNo2 || iNo3)==0)
    {
        return iNo1;
    }

    if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }

    int iMult = 1;

    iMult = iNo1 * iNo2 * iNo3;
        
    return iMult;

} 