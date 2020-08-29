#include "Header.h"

char DisplayConvert ( char CValue)  
{   
    if(CValue >=65 && CValue <=90 )   
    {    
        CValue = CValue + 32;
        printf("%c", CValue ); 
    }   
    else if(CValue >=97 && CValue <=122 )   
    {    
        CValue = CValue - 32;
        printf("%c", CValue ); 
    } 
}  