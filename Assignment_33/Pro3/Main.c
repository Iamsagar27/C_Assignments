/*
3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number. 
Input :  137 
Output : 201 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask = 0x00000001;
    int iPos =  7;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }
    
    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;
    
    return iResult;

} 
int main()
{
    int iNo = 0 ,iRet = 0;

    printf("Enter the number :\t");
    scanf("%d",&iNo);

    iRet=ToggleBit(iNo);

    printf("Modified number is %d",iRet);    

    return 0;
}