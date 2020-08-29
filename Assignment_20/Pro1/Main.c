/*
1. Design application for hotel. According to the management team of hotel they are giving discount on total 
bill amount of customer.  If bill bill amount is less than 500 then there is no discount , if bill amount is 
less than 1500 and more than 500 they give 10% discount.  And if the bill amount is more than 1500 then they 
give 15% discount.  Our application should accept total bill amount and depends on the discount policy we have 
to return the amount after applying discount.   

Input : 1200  Output : 1080 
Input : 290   Output : 290 
Input : 3700  Output : 3145 
*/
#include<stdio.h>

float CalculateBill(int iAmount) 
{  
    int iDiscount = 0;

    if(iAmount < 500 )
    {
        iDiscount = 0;
    }
    else if (iAmount > 500 && iAmount <1500) 
    {
        iDiscount = iAmount / 10;
    }
    else
    {
        iDiscount = iAmount / 15;
    }
    return (iAmount - iDiscount) ;
}

int main()
{
    int iTotal = 0;
    int iRet = 0;

    printf("Enter the Amount :");
    scanf("%d",&iTotal);

    iRet = CalculateBill(iTotal);

    printf("The total amount after discount is %d",iRet);

    return 0 ;
}