/*
5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. 
Return modified number. (Nibble is a group of four bits) 
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo )
{
    int iPos = 0XF000000F;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iRet = iNo ^ iPos;

    return iRet;
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter the number :\t");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);

    printf("Modified number :%d\t",iRet);

    return 0;
}
