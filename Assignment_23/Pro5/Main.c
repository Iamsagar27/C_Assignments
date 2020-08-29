/*
5. Accept N numbers from user and return product of all odd elements. 

Input :  N :   6     Elements : 15 66 3 70 10 88  
Output : 45 

Input :  N :   6     Elements : 44 66 72 70 10 88  
Output : 0 
*/

#include<stdio.h> 
#include<stdlib.h>
int Product(int Arr[], int iLength) 
{  
    int iCnt = 0 , iProduct = 1;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}


int main()
{
    int iSize = 0 , iCnt = 0 ,iRet = 0;
    int *ptr=NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Error : UNable to allocate memory");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Product(ptr , iSize);

    printf("\nProduct : %d",iRet);

    free(ptr);

    return 0;
}