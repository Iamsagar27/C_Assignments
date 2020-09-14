/*
3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off. 

Input :  257  
Output :  TRUE
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
    int iMask1 = 0X00000900;
    int iResult = 0,iCnt = 0;
    int iMask2 = 0X00000001;

    iResult = iValue & iMask1;
    iResult = iResult >> 8;

    while(iResult != 0)
    {
        if((iResult & iMask2)==1)
        {
            iCnt++;
            break;
        }

        iResult = iResult >> 1;
    }
    if(iCnt>=1)
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
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet==TRUE)
    {
        printf("Both the bits are ON\n");
    }
    else
    {
        printf("Both the bits are OFF\n");
    }
    
    return 0;
}


