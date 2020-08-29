/*  5. Accept on character from user and check whether that character is vowel  (a,e,i,o,u) or not.  
Input : E   Output : TRUE  
Input : d   Output : FALSE
*/

#include "Header.h"

int main() 
{  
    char cValue = '\0';  
    BOOL bRet = FALSE;    
    
    printf("Enter character\n"); 
    scanf("%c",&cValue); 
    
    bRet = ChkVowel(cValue);    
   
    if (bRet == TRUE)  
    {   
        printf("It is a Vowel");  
    }  
    else  
    {   
        printf("It is not a Vowel");
    }
    
    return 0; 
} 
