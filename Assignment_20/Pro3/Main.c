/*
3. Design application for school management system.  As school is primary there are 4 standards from 1 to 4.  
School fees of each standard is different.  For first standard fees are 8900, for second standard 12790, for 
third standard 21000 and for fourth standard fees are 23450.  We have to accept standard from user and display 
the corresponding fees. 

Input : 2   Output : 12790 
Input : 4   Output : 23450 
Input : 6   Output : Wrong input 
*/

#include<stdio.h>

int SchoolFees(int iStandard) 
{  
    int iDiv = 0;

    if(iStandard == 1)
    {
        iDiv = 1 ;
    }
    else if(iStandard == 2)
    {
        iDiv = 2 ;
    }
    else if(iStandard == 3)
    {
        iDiv = 3 ;
    } 
    else if(iStandard == 4)
    {
        iDiv = 4 ;
    }
    else
    {
        iDiv = 5;
    }

    return iDiv ;
}

int main()
{
    int iDivision =0;
    int iRet = 0;

    printf("Enter the Division :");
    scanf("%d",&iDivision);

    iRet = SchoolFees(iDivision);

    switch (iRet)
    {
    case 1:
        printf("Fees is 8900");
        break;

    case 2:
        printf("Fees is 12790");
        break;

    case 3:
        printf("Fees is 21000");
        break;

    case 4:
        printf("Fees is 23450");
        break;
    
    case 5:
        printf("Wrong input");
        break;


    default:
        break;
    }

    return 0;
}



