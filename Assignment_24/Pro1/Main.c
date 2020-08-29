/*
1. Accept N numbers from user and return the largest number. 
Input :  N :   6 
  Elements : 85 66 3 66 93 88  
Output : 93 
*/

#include<stdio.h>
#include<stdlib.h> 

int Maximum(int Arr[], int iLength) 
{  
    int iCnt = 0;
    int iMax = Arr[0];

    if(Arr == NULL)         
    {
        printf("Invalid address");
        return 0;       
    }
    if(iLength <= 0)          
    {
        printf("Invalid size\n");
        return 0;         
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
     return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    ptr =(int *)malloc(sizeof(int) * iSize);

    if(ptr == 0)
    {
        printf("Error : Unable to allocate memory ");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr,iSize);

    printf("Largest number is %d",iRet);

    free(ptr);

    return 0 ;
}


