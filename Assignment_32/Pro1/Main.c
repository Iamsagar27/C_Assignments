/*
1.Write a program which checks whether 15th bit is On or OFF.  
*/

#include<stdio.h>

typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iPos = 0,iRem = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iRem = iNo %2;
        iPos++;
        if(iPos == 15)
        {
            break;
        }
        iNo = iNo / 2;
    }
    if((iPos == 15) && (iRem == 1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

BOOL CheckBitX(int iNo)
{
    int iMask = 0X00004000;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    bRet = CheckBitX(iNo);
    if(bRet == TRUE)
    {
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is Off");
    }
    return 0;
}