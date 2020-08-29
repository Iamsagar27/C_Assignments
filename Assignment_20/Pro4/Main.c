/*
4.We have to design application for tourist company.  Tourist company provides cars on rent.  Depends on the 
running of car they apply rent. If running is less than 100 kilometres then they charge 25 rupees per kilometre .  
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.  
We have to accept number of kilometres from user and return the estimated rent. 

Input : 73   Output : 1825 
Input : 132   Output : 2980 
Input : 189   Output : 3835 
*/
#include<stdio.h>

int TouristBill(int iKilometer) 
{  
    int iCharge = 0;

    if(iKilometer <=100)
    {
        iCharge = iKilometer * 25 ;
    }
    else //if(iKilometer > 100)
    {
        iCharge = (100 * 25) + (iKilometer - 100) * 15;
    }
    return iCharge ;
}

int main()
{
    int iRunning = 0 ;
    int iRet = 0 ;

    printf("Enter the running of car :");
    scanf("%d",&iRunning);

    iRet = TouristBill(iRunning);

    printf("The rent of car is %d",iRet);

    return 0;
}