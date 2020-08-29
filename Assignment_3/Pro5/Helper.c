#include "Header.h"


BOOL ChkVowel ( char cAlphabet)  
{   
    if(cAlphabet == 'a' || cAlphabet == 'e' || cAlphabet == 'i' || cAlphabet == 'o' || cAlphabet == 'u'||
        cAlphabet == 'A' || cAlphabet == 'E' || cAlphabet == 'I' || cAlphabet == 'O' || cAlphabet == 'U')   
    {            
        return TRUE;      
    }  
    else   
    {            
        return FALSE;       
    } 
}  
