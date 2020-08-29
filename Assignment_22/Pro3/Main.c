/*
3. Accept N numbers from user check whether that numbers contains 11 in it or not. 
Input :  N :   6 
Elements : 85 66 11 80 93 88  
Output : 11 is present 

Input :  N :   6 
Elements : 85 66 3 80 93 88  
Output : 11 is absent    
*/
#include<stdio.h>
#include<stdlib.h> 

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

BOOL Check(int Arr[], int iLength) 
{  
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
} 

int main() 
{  
    int iSize = 0,iRet = 0,iCnt = 0;  
    int *p = NULL;  
    BOOL bRet = FALSE; 
 
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
    
    bRet = Check(p, iSize);    
    if(bRet == TRUE)  
    {   
        printf("\n11 is present");  
    }  
    else  
    {   
        printf("\n11 is absent");  
    }  
    
    free(p); 
 
    return 0; 
} 