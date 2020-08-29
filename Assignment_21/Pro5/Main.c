/*5. Accept N numbers from user and display all such elements which are multiples of 11. 

Input :  N :   6 
Elements : 85 66 3 55 93 88  
Output : 66 55 88
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength) 
{  
    int iCnt = 0;

    printf("\nThe numbers multiple of 11 : ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 11)== 0) 
        {
            printf(" %d\t",Arr[iCnt]);
        }
    } 
} 

int main() 
{  
    int iSize = 0 , iRet = 0 , iCnt = 0 , iLength = 0;  
    int *p = NULL; 
 
    printf("Enter number of elements");  
    scanf("%d",&iSize); 
 
    p = (int *)malloc(iSize * sizeof(int)); 
 
    if(p == NULL)  
    {   
        printf("Unable to allocate memory");   
        return -1;  
    } 
 
    //printf("Enter %d elements ",iLength); 
 
    for(iCnt = 0;iCnt<iSize; iCnt++)  
    {   
       // printf("Enter element : %d",iCnt);   
        scanf("%d",&p[iCnt]);
    } 

    printf("The Elements are :");
    
    for(iCnt = 0;iCnt<iSize; iCnt++)  
    {   
        printf("%d\t",p[iCnt]);   
    }

    Display(p, iSize);    
    
    free(p); 
 
    return 0; 
}