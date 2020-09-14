/*
2. Write a program which accept one number from user and off 7th and 10th bit of that number. 
Return modified number. 
Input :  577 
Output : 1 
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iPos = 0X00000240;

    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iResult = iNo ^ iPos;
    
    return iResult;
}

int main()
{
    int iNo = 0, iRet=0;

    printf("Enter the number:\t");
    scanf("%d",&iNo);

    iRet = OffBit(iNo);

    printf("Modified number : %d",iRet);

    return 0;
}