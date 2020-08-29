/*
4. Accept N numbers from user and return frequency of 11 form it. 

Input :  N :   6 
Elements : 85 66 3 15 93 88  
Output : 0 

Input :  N :   6 
Elements : 85 11 3 15 11 111  
Output : 2
*/


#include<stdio.h> 
#include<stdlib.h>

int Frequency(int Arr[], int iLength) 
{  
   int iCnt = 0,i=0;

    for(iCnt=0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            i++;
        }
    } 
    return i;  
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
   
    printf("\nFrequency : %d",iRet); 
 
    free(p); 
    
    return 0;
}