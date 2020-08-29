#include "Header.h"

double Percentage(int iTotal,int iObtain)   
{
    if(iObtain == 0)
    {
        return 0.0;
    }
    
    
    double dPerc = 0.0;

    dPerc = ((double)iObtain * 100 ) / (double)iTotal ; 

    return dPerc;

      
} 