/*
1. Accept number from user and display below pattern. 

Input :  5  
Output : A B C D E      
*/

#include<stdio.h> 

void Pattern(int iNo) 
{
    int iCnt=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    } 

    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%c\t",'A' -1 +iCnt);
    }
} 

int main() 
{  
    int iValue = 0; 
 
    printf("Enter number of elements");  
    scanf("%d",&iValue); 
 
    Pattern(iValue); 
 
    return 0; 
}