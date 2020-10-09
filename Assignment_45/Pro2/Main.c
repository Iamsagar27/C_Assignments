/*
2. Write a recursive program which display below pattern.  
Input :   5 
Output :   1 2 3 4 5 
*/

#include<stdio.h>

void DisplayR(int iNo) 
{
    static int i = 1;

    if(i <= iNo)
    {
        printf(" %d " , i);
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











