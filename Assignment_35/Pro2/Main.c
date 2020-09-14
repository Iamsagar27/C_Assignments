/*
2. Write a program which accept two numbers from user and display position of common ON bits from 
that two numbers. 

Input :  10 15  (1010  1111) 
Output :  2 4 
*/
#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iValue1,UINT iValue2)
{
    int iMask = 0X00000001;
    int iPos = 1;
    int iResult = 0;

    iResult = iValue1 & iValue2;

    while(iResult != 0)
    {
        if((iResult & iMask)==1)
        {
            printf("%d\t",iPos);
        }
        iPos++;
        iResult = iResult >> 1;
    }
    printf("\n");
}

int main()
{
    UINT iNo1 = 0;
    UINT iNo2 = 0;

    printf("Enter first number:\t");
    scanf("%d",&iNo1);
    printf("Enter second number:\t");
    scanf("%d",&iNo2);

    CommonBits(iNo1,iNo2);

    return 0;
}