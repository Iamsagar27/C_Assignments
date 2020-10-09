/*
4.  Write a recursive program which accept number from user and return smallest digit 
Input : 87983 
Output : 3
*/

#include<stdio.h>

int MinR(int iNo)       
{
    int iMin = 0;        // 3425
    int iDigit = 0;

    iMin = iNo % 10;

    if(iNo != 0)       
    {
        iDigit = iNo % 10;   // 5
        if(iMin > iDigit)    // 0 > 5
        { 
            iMin = iDigit;
        }
        iNo /=10;
        MinR(iNo);
    }
    return iMin;
}

int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter the number :\t");
    scanf("%d",&iNo);

    iRet = MinR(iNo);

    printf("The min digit : %d",iRet);

    return 0;
}




