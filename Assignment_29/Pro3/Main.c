/*
3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character. 

Input :   “Marvellous Multi OS”    M 
Output :   0 
Input :   “Marvellous Multi OS”    W 
Output :   -1 
Input :   “Marvellous Multi OS”    e 
Output :   4 
*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int i = 0;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(*str == ch)
        {
            break;
        }
        i++;
        str++;
    }
    if(*str == ch)
    {
        return i;
    }
    else
    {
        return -1;
    }
}



int main()
{
    char arr[30],cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("First occurence of character is %d",iRet);

    return 0;
}


















