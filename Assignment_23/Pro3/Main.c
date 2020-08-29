/*
3. Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 

Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : 3 
Input :  N :   6 
  NO:  93 
  Elements : 85 66 3 66 93 88  
Output : 4 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo) 
{  
    int iCnt = 0 ;
    int iAns = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iAns = iCnt;
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

    iRet =LastOcc(ptr , iSize , iValue);

    printf("\n%d",iRet);

    return 0;
}
