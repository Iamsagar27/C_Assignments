/*
3. Write a recursive program which accept string from user and count number of small characters. 
Input : HElloWOrlD 
Output : 5 
*/

#include<stdio.h>

int SmallR(char *str)
{
    static int iCnt = 0;

    if(*str != 0)
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[30];

    printf("Enter the number:\t");
    scanf("%[^'\n']s",arr);

    iRet = SmallR(arr);

    printf("Count of small character : %d",iRet);

    return 0;
}

