/*
5. Write a program which accept one number from user and range of positions from user. 
Toggle all bits from that range. 

Input : 897  9 13 
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include<stdio.h>
#include<stdlib.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iValue,int iLow,int iUp)
{
    int iDiff = 0,iCnt = 0,iPos = 0;
    int *iMask;
    int iMask1 = 0X00000001;
    int iMask2 = 0;
    UINT iResult = 0;

    if((iLow<0) || (iUp>32))
    {
        return -1;
    }
    if(iUp>iLow)
    {
        iDiff = iUp - iLow;
        iPos = iLow;
    }
    else
    {
        iDiff = iLow - iUp;
        iPos = iUp;
    }
    iDiff++;

    iMask = (int *)malloc(sizeof(int) * iDiff);

    for(iCnt=0;iCnt<iDiff;iCnt++,iLow++)
    {
        iMask1 = 0X00000001;
        iMask[iCnt] = iMask1 << iLow - 1; 
        iMask2 = iMask2 | iMask[iCnt];
    }
        
    iResult = iValue ^ iMask2;
 
    return iResult; 
}

int main()
{
    UINT iNo = 0;
    int iLow = 0;
    int iUp = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter lower bound of range :");
    scanf("%d",&iLow);
    printf("Enter upper bound of range :");
    scanf("%d",&iUp);

    iRet = ToggleBitRange(iNo,iLow,iUp);

    if(iRet==-1)
    {
        printf("Error : Invalid Range\n");
    }
    else
    {
        printf("Modified Number is : %d\n",iRet);
    }
    
    return 0;
}


