/*
3. Accept N numbers from user and return the difference between largest and smallest number. 
Input :  N :   6 
  Elements : 85 66 3 66 93 88  
Output : 90 (93 -3)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0] , iMin = Arr[0];
 
    if(Arr == NULL)
    {
        printf("Invalid Address");
        return 0;
    }    
    
    if(iLength <= 0)
    {
        printf("Invalid Size");
        return 0;
    }
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }
    return (iMax - iMin);

}

int main()
{
    int iSize = 0 , iCnt = 0 , iRet = 0;
    int *ptr =NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Error : Unable to allocate memory");
        return -1;
    }

    for(iCnt= 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr , iSize);

    printf("Difference is %d",iRet);

    free(ptr);

    return 0;
}

