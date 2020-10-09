/*
4. Write a recursive program which accept number from user and return its factorial.  
Input :  5   Output : 120 
*/

#include<stdio.h>

int FactR(int no)
{
    static int Fact = 1;
    static int i = 1;
    
    if(i<=no)
    {
        Fact = Fact * i;
        i++;
        FactR(no);
    }
    return Fact;
}

int main() 
{  
    int iValue = 0, iRet = 0; 
    
    printf("Enter number :\t");  
    scanf("%d",&iValue); 
 
    iRet = FactR(iValue); 
 
    printf("%d",iRet);    
    
    return 0; 
} 













