/*
4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 

Input :  % 
Output :  TRUE 
Input :  d 
Output :  FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch) 
{  
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%'|| ch == '^' || ch == '&' || ch == '*')
     {
         return TRUE;
     }
     else
     {
         return FALSE ;
     }
     
} 

int main() 
{  
    char cValue = '\0';  
    BOOL bRet = FALSE; 
 
    printf("Enter the character :");  
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue); 
 
    if(bRet == TRUE)  
    {   
        printf("It is special Character");  
    }  
    else  
    {   
        printf("It is not a special Character");  
    }    
    
    return 0; 
 }










