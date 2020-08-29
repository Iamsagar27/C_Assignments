/*
4. Write a program which accepts N from user and print all odd numbers up to N. 

Input :  18  Output :  1  3  5  7  9  11  13  15 17
*/

#include<stdio.h> 

void OddDisplay(int iNo) 
{ 
    int iCnt =0;
    int iDigit =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            printf("%d\t",iCnt);
        }
    }
      
} 

int main() 
{ 
    int iValue = 0;  
    
    printf("Enter number:\n");  
    scanf("%d",&iValue); 

    OddDisplay(iValue); 

    return 0; 
}