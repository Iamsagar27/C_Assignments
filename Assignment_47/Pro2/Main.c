/*
2. Write a recursive program which accept number from user and return largest digit 
Input : 87983 
Output : 9 
*/

#include<stdio.h>

int MaxR(int iNo)
{
    int iMax = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        { 
            iMax = iDigit;
        }
        iNo /=10;
        MaxR(iNo);
    }
    return iMax;
}

int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter the number :\t");
    scanf("%d",&iNo);

    iRet = MaxR(iNo);

    printf("The max digit : %d",iRet);

    return 0;
}




