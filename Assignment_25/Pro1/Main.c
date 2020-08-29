/*
1. Accept Character from user and check whether it is alphabet or not (A-Z a-z). 

Input :  F 
Output :  TRUE 

Input :  & 
Output :  FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 

BOOL ChkAlpha(char ch) 
{  

    if((ch >='a'  && ch <= 'z'  ) || (ch >= 'A'  && ch <= 'Z'  ))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    



}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}