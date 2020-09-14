/*
2. Write a program which accept one number and position from user and off that bit. Return modified number. 
Input :  10 2 
Output :  8 
*/
#include<stdio.h>
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo, int iPos) 
{
    int iMask = 0X00000001;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iPos < 1) && (iPos > 32))
    {
        return FALSE;
    }

    iMask = iMask << (iPos -1);

    iRet = iNo ^ iMask;

    return iRet;
}

int main()
{
    int iNo = 0,iPos=0;
    int iRet = FALSE;
    
    printf("Enter the number :\t");
    scanf("%d",&iNo);

    printf("Enter the position :\t");
    scanf("%d",&iPos);

    iRet = OffBit(iNo,iPos);

    printf("Modified number : %d",iRet);
    return 0;
}









