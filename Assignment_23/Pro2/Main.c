/*
2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. 

Input :  N :   6 
NO:  66 
Elements : 85 66 3 66 93 88  
Output : 1 

Input :  N :   6 
NO:  12 
Elements : 85 11 3 15 11 111  
Output : -1   
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo) 
{  
    int iCnt = 0 ;
    int iAns = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iAns = iCnt;
            break;
        }
        else
        {
            iAns = -1;
        }
        
    }
    return iAns;     
}

int main()
{
    int iValue = 0 ,iSize = 0 , iCnt = 0 ;
    int *ptr = NULL;
    int iRet = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the Value :");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Error : UNable to allocate memory");
        return -1;
    }

    printf("The elements :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =FirstOcc(ptr , iSize , iValue);

    printf("\n%d",iRet);

    return 0;
}



