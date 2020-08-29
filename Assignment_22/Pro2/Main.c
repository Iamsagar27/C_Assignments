/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers. 

Input :  N :   7 
Elements : 85 66 3 80 93 88 90 
Output : 1 (4 -3)    
*/
#include<stdio.h> 
#include<stdlib.h>

int Frequency(int Arr[], int iLength) 
{  
   int iCnt = 0,iEven = 0 , iOdd =0;

    for(iCnt=0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
        
    } 
    return (iEven - iOdd);  
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
 
    for(iCnt = 0;iCnt<iSize; iCnt++)  
    {      
        scanf("%d",&p[iCnt]);
    } 

    printf("The Elements are :");
    
    for(iCnt = 0;iCnt<iSize; iCnt++)  
    {   
        printf("%d\t",p[iCnt]);   
    } 
 
    iRet = Frequency(p, iSize); 
   
    printf("\n%d",iRet); 
 
    free(p); 
    
    return 0;
}