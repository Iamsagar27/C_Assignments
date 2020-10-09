/*
4.Write a recursive program which display below pattern.  
Input :  6 
Output :   A B C D E F 
*/

#include<stdio.h>

void DisplayR(int iNo) 
{ 
    static int i = 1;

    if(i<=iNo)
    {
        printf(" %c ",'A' -1 +i);
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

