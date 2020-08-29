/*
2.Write a program which accept string from user and accept one character. Return frequency of that character. 

Input :   “Marvellous Multi OS”    M 
Output :   2 
Input :   “Marvellous Multi OS”    W 
Output :   0 
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(char *str , char ch)
{
    int i = 0,iCnt = 0;

    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}


int main()
{
    char arr[30] ,cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = Frequency(arr,cValue);

    printf("Freuency of the character is %d",iRet);

    return 0;
}















