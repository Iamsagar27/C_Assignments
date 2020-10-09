/*
1. Write a recursive program which accept string from user and count white spaces. 
Input : HE llo WOr lD 
Output : 3
*/

#include<stdio.h>

int WhiteSpaceR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpaceR(str);
    }
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter the string :\t");
    scanf("%[^'\n']s",arr);

    iRet = WhiteSpaceR(arr);

    printf("Count of whitespace : %d",iRet);

    return 0;
}




