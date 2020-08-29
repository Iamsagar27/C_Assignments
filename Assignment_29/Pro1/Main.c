/*
1.Write a program which accept string from user and accept one character. Check whether that character 
is present in string or not. 

Input :   “Marvellous Multi OS”    e 
Output :   TRUE 

Input :   “Marvellous Multi OS”    W 
Output :   FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char str[] , char ch)
{
    int i = 0 ,iRet = 0;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }

    while(str[i]!='\0')
    {
        if(str[i] == ch)
        {
            break;
        }
        i++;
    }
    if(str[i] == ch)
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
    char arr[30]; 
    BOOL bRet= FALSE;
    char cValue = '\0';

    printf("Enter the string :\n");
    scanf("%[^\n]",arr);

    printf("Enter the character to be searched :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("The character is present");
    }   
    else
    {
        printf("The character is not present");
    }

    return 0;
}



























