#include "Header.h"

void PrintEven(int iNo) 
{  
    int iCnt = 0;

    if(iNo <= 0)
    {    
        return;   
    }  
    
    for( iCnt = 2 ; iCnt <= iNo*2 ; iCnt+=2) 
    {
               printf("%d\t",iCnt);
       
    }    
}  