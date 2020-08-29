/*
1. Accept N numbers from user and accept one another number as NO , check whether NO is present or not. 
Input :  N :   6 
NO:  66 
Elements : 85 66 3 66 93 88  
Output : TRUE 

Input :  N :   6 
NO:  12 
Elements : 85 11 3 15 11 111  
Output : FALSE   
*/

#include<stdio.h>
#include<stdlib.h>
 
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 

BOOL Check(int Arr[], int iLength, int iNo) 
{  
    int i = 0;
    int iRet = 0;

    for(i = 0; i<iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            iRet = 1;
        } 
        else
        {
            iRet = 0;
        }
    }
    return iRet ;
}

int main()
{
    int iSize = 0 , iValue = 0,iCnt = 0 ;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter the values :");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present ");
    }
    else
    {
        printf("Number is not present ");
    }

    free(ptr);

    return 0;
}