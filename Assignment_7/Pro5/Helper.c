#include "Header.h" 

int CountDiff(int iNo) 
{   
    int iSum = 0;  
    int iSum1 = 0;                         
    int iDigit = 0; 
    if(iNo < 0)  
    {   
        iNo = -iNo;  
    }                        
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0) 
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSum1 = iSum1 + iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    return iSum - iSum1;
} 