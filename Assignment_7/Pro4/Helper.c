#include "Header.h" 

int MultDigits(int iNo) 
{                            
    int iDigit = 0;                          
    int iMult = 1;

    if (iNo ==0)
    {
        return 0;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    
    return iMult;
} 