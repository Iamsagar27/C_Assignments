/*
5. Accept number of rows and number of columns from user and display below pattern. 

Input :  iRow = 4  iCol =  4  
Output :    1 2 3 4    
              2 3 4      
                3 4      
                  4 
*/

#include<stdio.h> 

void Pattern(int iRow, int iCol) 
{  
    int i = 0 , j = 0, k = 0;
    
    
    if (iRow < 0 && iCol < 0)
    {
        iRow = -iRow;
        iCol = -iCol;
    }

    
    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = iCol ; j > i ; j--)
        {
            printf("\t");
        }
        for(k = 1 ; k <= i ; k++)
        {
            printf("*\t");
        }
        printf("\n");
    }
     
} 

void PatternX(int iRow, int iCol) 
{  
    int i = 0 , j = 0, k = 0;
    
    
    if (iRow < 0 && iCol < 0)
    {
        iRow = -iRow;
        iCol = -iCol;
    }

    
    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i > j)
            {
                printf(" \t");
            }
            else
            {
                printf("%d\t",j);
            }
            
        }
        printf("\n");
    }
     
} 

int main() 
{  
    int iValue1 = 0, iValue2 = 0; 
 
    printf("Enter number of rows and columns");  
    scanf("%d %d",&iValue1, &iValue2); 
 
    PatternX(iValue1, iValue2); 
 
    return 0; 
}