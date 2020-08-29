/*
4. Accept N numbers from user and display all such numbers which contains  3 digits in it. 

Input :  N :   6 
Elements : 8225  665 3 76 953 858  
Output : 665 953 858 
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength) 
{  
    int iCnt = 0 ,iDigit = 0,iCount = 0;
    int iCnt1 = 0,iNo = 0;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        iNo =Arr[iCnt];
        iCnt1 = 0;

        while (iNo!=0 )
        {
            iNo= iNo / 10;
            iCnt1++;
        }
        if(iCnt1 == 3)
        {
            iCount++;
        }
        
    }    
    printf("The count is %d",iCount);
}

int main()
{
    int *ptr = NULL , iSize = 0 , iCnt = 0 , iValue = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);
    
    if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory ");
        return -1;
    }

    printf("The Elements are :");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr,iSize);

    free(ptr);

    return 0;
}