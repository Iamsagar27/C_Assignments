/*
4. Write a program which accept one number , two positions from user and check whether bit at first 
or bit at second position is ON or OFF. 

Input :  10 3 7 
Output :  TRUE
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue,int iPos1,int iPos2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;
    int iMask3 = 0;
    int iMask4 = 0X00000001;
    int iResult = 0;
    int iPos = 0;
    int iCnt = 0;
    if(iPos1<iPos2)
    {
        iPos = iPos1;
    }
    else
    {
        iPos = iPos2;
    }
    if((iPos1<1)) 
    {
        iPos = iPos2;
    }
    if((iPos2<1)) 
    {
        iPos = iPos1;
    }
    if((iPos1>32)) 
    {
        iPos = iPos2;
    }
    if(iPos2>32)
    {
        iPos = iPos1;
    }
    if((iPos1<1) && (iPos1>32))
    {
        return FALSE;
    }
    if((iPos2<1) && (iPos2>32))
    {
        return FALSE;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    iMask3 = iMask1 | iMask2;

    iResult = iValue & iMask3;
    iResult = iResult >> (iPos-1);

    while(iResult != 0)
    {
        if((iResult & iMask4)==1)
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
    int iPos1 = 0;
    int iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter first position :");
    scanf("%d",&iPos1);
    printf("Enter second position :");
    scanf("%d",&iPos2);

    bRet = ChkBit(iNo,iPos1,iPos2);

    if(bRet==TRUE)
    {
        printf("One of the bit is ON\n");
    }
    else
    {
        printf("Both the bits are OFF\n");
    }

    return 0;
}



