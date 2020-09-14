/*1.Write a program which accept one number and position from user and check whether bit at that position 
is on or off. If bit is one return TURE otherwise return FALSE. 

Input :  10 2 
Output :  TRUE   
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iPos < 1) && (iPos >32))
    {
        return FALSE;
    }

    iMask = iMask<<(iPos -1);

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
    int iNo = 0,iPos=0;
    BOOL bRet = FALSE;
    
    printf("Enter the number :\t");
    scanf("%d",&iNo);

    printf("Enter the position :\t");
    scanf("%d",&iPos);

    bRet = ChkBit(iNo,iPos);

    if(bRet == TRUE)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is off");
    }
    return 0;
}



