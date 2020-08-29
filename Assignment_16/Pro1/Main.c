/*
1. Accept number of rows and number of columns from user and display below pattern. 

Input :  iRow = 4  iCol = 4  
Output :    1 2 3 4   
            5 6 7 8   
            9 1 2 3   
            4 5 6 7    
*/

#include<stdio.h> 

void Pattern(int iRow, int iCol) 
{
    int i = 0;
    int j = 0;
    int k = 1;

    if (iRow < 0 && iCol < 0)
    {
        iRow = -iRow;
        iCol = -iCol;
    }
     
    for(i=1 ;i<=iRow ; i++)
    {
        
        for(j=1; k <=9 && j<=iCol ; j++,k++)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    

} 

int main() 
{  
    int iValue1 = 0, iValue2 = 0; 
 
    printf("Enter number of rows and columns");  
    scanf("%d %d",&iValue1, &iValue2); 
 
    Pattern(iValue1, iValue2); 
 
    return 0; 
}