/*
1.Write a program which accept one number from user and count number of ON (1) bits in it without using % 
and / operator. 

Input :  11 
Output :  3 
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT CountOne(UINT iValue)
{
    int iMask = 0x00000001;
    UINT iCnt = 0;
    int iResult = 0;

    if(iValue<0)
    {
        return -1;
    }
    while(iValue!=0)
    {
        iResult = iValue & iMask;
        if(iResult==iMask)
        {
            iCnt++;
        }
        iValue = iValue >> 1;
    }
    return iCnt;
}

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountOne(iNo);

    printf("Count of one is : %u\t",iRet);

    return 0;
}