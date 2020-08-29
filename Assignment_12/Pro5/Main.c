/*
5. Write a program which returns difference between Even factorial and odd factorial of given number.  

Input :  5  Output :  -7   (8 - 15) 
Input :  -5  Output :  -7   (8 - 15) 
Input :  10  Output :  2895  (3840 - 945) 
*/

#include<stdio.h> 

int FactorialDiff(int iNo) 
{
    int iCnt = 0;
    int iEvenSum = 1;
    int iOddSum = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenSum = iEvenSum * iCnt;
        }
        else
        {
            iOddSum = iOddSum * iCnt;
        }
        
    }
    return iEvenSum - iOddSum;
} 

int main() 
{  
    int iValue = 0,iRet = 0; 
 
    printf("Enter number\t");  
    scanf("%d",&iValue); 
 
    iRet = FactorialDiff(iValue); 
 
    printf("Factorial difference is %d",iRet); 
 
    return 0; 
 }