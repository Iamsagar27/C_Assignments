/*
5. Accept N numbers from user and display summation of digits of each number. 

Input :  N :   6 
Elements : 8225  665 3 76 953 858  
Output : 17 17 3 13 17 21 
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength) 
{  
    int iSum = 0 , iCnt = 0 ,iDigit = 0; 
    int iNo = 0;

    if(Arr == NULL)
    {
        return;
    }
    if(iLength <= 0)
    {
        return;
    }
    
    printf("Addition of digits : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int *ptr= 0 ,iSize = 0 ,iCnt=0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int)* iSize);

    if(ptr ==NULL)
    {
        printf("Error :Unable to allocate the memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DigitsSum(ptr,iSize);

    return 0;
}