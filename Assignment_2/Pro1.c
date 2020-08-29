#include<stdio.h>

void Display(int iNo)  
{  
    int iCnt = 0;   
 
    for( iCnt=1 ; iCnt<=iNo ; iCnt++)   
    {   
        printf("*");  
    }  
}  

int main() 
{  
    int iValue = 0; 
    printf("Enter number");  
    scanf("%d",&iValue); 
    Display(iValue); 
    return 0; 
}