/*
3. Accept Character from user and check whether it is digit or not (0-9). 

Input :  7 
Output :  TRUE 

Input :  d 
Output :  FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if( ch >= 48 && ch <=57)
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
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("The charater is a number");
    }
    else
    {
        printf("The charater is not a number");
    }

    return 0;
}
