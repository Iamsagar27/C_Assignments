/*
5. Write a program which accept one number from user and on its first 4 bits. Return modified number. 
Input :  73 
Output : 79
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    int iMask = 0X00000001;
    int iPos = 0X0000000F;

    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iResult = iNo | iPos;
    
    return iResult;
}

int main()
{
    int iNo = 0, iRet=0;

    printf("Enter the number:\t");
    scanf("%d",&iNo);

    iRet = OnBit(iNo);

    printf("Modified number : %d",iRet);

    return 0;
}