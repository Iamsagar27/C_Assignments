#include<stdio.h> 
#define TRUE 1 
#define FALSE 0 

typedef int BOOL;   

BOOL ChkEven(int iNo)  
{  
    int iAns = 0;

    iAns = iNo % 2; 

    if(iAns==1)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}  

int main() 
{  
    int iValue = 0;  
    BOOL bRet = FALSE; 
    
    printf("Enter number");  
    scanf("%d" ,&iValue); 
    
    bRet = ChkEven(iValue); 
 
    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    
    return 0; 
}
