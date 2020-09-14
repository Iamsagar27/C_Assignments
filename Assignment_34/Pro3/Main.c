/*
3. Write a program which accept one number and position from user and on that bit. Return modified number. 
Input :  10 3 
Output :  14 
*/

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo , int iPos)
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

    iRet = iNo | iMask;

    return iRet;
}

int main()
{
    int iNo = 0,iPos = 0;
    int iRet = 0;
    
    printf("Enter the number :\t");
    scanf("%d",&iNo);

    printf("Enter the position :\t");
    scanf("%d",&iPos);

    iRet = OnBit(iNo,iPos);

    printf("Modified number :%d\t",iRet);

    return 0;
}


