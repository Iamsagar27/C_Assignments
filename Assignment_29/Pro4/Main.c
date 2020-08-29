/*
4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character. 

Input :   “Marvellous Multi OS”    M 
Output :   11 
Input :   “Marvellous Multi OS”    W 
Output :   -1 
Input :   “Marvellous Multi OS”    e 
Output :   4
*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int i = 0,iPos = -1;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(*str == ch)
        {
            iPos = i;
        }
        i++;
        str++;
    }
    return iPos;
}



int main()
{
    char arr[30],cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Last occurence of character is %d",iRet);

    return 0;
}

