/*
1. Accept N numbers from user and return difference between summation of even elements and summation of odd 
elements. 

Input :  N :   6 
Elements : 85 66 3 80 93 88  
Output : 53 (234 - 181)   
*/

#include<stdio.h>
#include<stdlib.h> 

int Difference(int Arr[], int iLength) 
{  
    int iSum = 0 , iOdd = 0 , i,iCnt=0; 

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0 )
        {
            iSum = iSum + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return (iSum - iOdd);
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

    iRet = Difference(p, iSize);    
    
    printf("\nResult is : %d",iRet); 
 
    free(p); 
 
    return 0; 
}