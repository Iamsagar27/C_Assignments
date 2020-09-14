/*
4. Write a program which accept one number from user and toggle 7th and 10th bit of that number. 
Return modified number. 
Input :  137 
Output : 713 
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask = 0X00000240;
    

    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    int iNo = 0, iRet=0;

    printf("Enter the number:\t");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);

    printf("Modified number : %d",iRet);

    return 0;
}