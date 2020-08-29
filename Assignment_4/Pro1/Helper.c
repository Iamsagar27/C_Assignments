#include "Header.h" 

int MultFact(int iNo) 
{
    int iMult = 1;       
    int iCnt = 0;         
    
    
    if(iNo == 0)       
    {
        return 0;
    }
    
   
    if(iNo < 0)             
    {
        iNo = -iNo;         
    }
    

    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
     
            if((iNo % iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }
    }
    
    return iMult;  
} 
