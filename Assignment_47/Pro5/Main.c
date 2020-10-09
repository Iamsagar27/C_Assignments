/*
5. Write a recursive program which accept number from user and return its reverse number.  
Input :  523 
Output :  325
*/

#include<stdio.h>

int ReverseR(int iNo)
{
    int iDigit = 0 ;
    static int iRev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo /=10;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter the number :\t");
    scanf("%d",&iNo);

    iRet = ReverseR(iNo);

    printf("The reverse number : %d",iRet);

    return 0;
}










