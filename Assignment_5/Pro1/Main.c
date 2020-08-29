/*
1. Write a program which accept name from user and print that name.  
  
  Input : Piyush Khairnar    Output : Piyush Khairnar  
*/  


#include<stdio.h>   

int main()   
{    
    char Name[30];    

    printf("Please enter full name");    
    scanf("%[^\n]",&Name);    

    printf("Your name is %s",Name);    

    return 0;   
} 