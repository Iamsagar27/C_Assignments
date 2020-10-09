/*
5. Write a recursive program which accept number from user and return its  product of digits.  
Input :  523 
Output :  30 
*/

#include<stdio.h>

int MultR(int iNo)
{
    static int Mult = 1;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        Mult = Mult * iDigit;
        
        iNo/=10;
        MultR(iNo);
    }
    return Mult;
}

int main() 
{  
    int iValue = 0, iRet = 0; 
 
    printf("Enter number :\t");  
    scanf("%d",&iValue); 
 
    iRet = MultR(iValue); 
 
    printf("%d",iRet);    
    
    return 0; 
}











