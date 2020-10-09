/*
1. Write a recursive program which display below pattern.  
Input :   5 
Output :   * * * * * 
*/
#include<stdio.h>

void DisplayR(int iNo) 
{
    static int i = 1;

    if(i <= iNo)
    {
        printf(" * " );
        i++;
        DisplayR(iNo);
    }
}
int main() 
{  
    int iValue = 0; 
 
    printf("Enter number :\t");  
    scanf("%d",&iValue);    
    
    DisplayR(iValue); 
 
    return 0; 
} 