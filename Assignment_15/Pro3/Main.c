/*
3. Accept number of rows and number of columns from user and display below pattern. 

Input :  iRow = 3  iCol = 5  
Output : A A A A A   
         B B B B B   
         C C C C C 
*/

#include<stdio.h> 

void Pattern(int iRow, int iCol) 
{  
    int i = 0;
    int j = 0;

    if (iRow < 0 && iCol < 0)
    {
        iRow = -iRow;
        iCol = -iCol;
    }

    for(i = 1 ; i <=iRow ; i++)
    {
        printf("\n");
        for(j = 1; j <=iCol ; j++)
        {
            printf("%c ",'A' - 1 + i);
        }
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