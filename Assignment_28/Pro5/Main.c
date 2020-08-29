/*
5. Write a program which accept string from user and count number of white spaces 
Input :   “MarvellouS” 
Output :   0 
Input :   “MarvellouS Infosystems” 
Output :   1 
Input :   “MarvellouS Infosystems by Piyush Manohar Khairnnar” 
Output :   5
*/

#include<stdio.h>

int CountWhite(char *str) 
{ 
    int i = 0,iCnt = 0;

    if(*str == ' ')
    {
        return -1;
    }

    while (*(str+i) != '\0')
    {
        if(*(str+i) == ' ')
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string :\t");
    scanf("%[^\n]",&arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0 ;
}