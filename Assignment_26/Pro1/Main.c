/*

1. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal 
representation of every member from 0 to 255. 

*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII() 
{
    int i = 0;

    for(int i = 0 ; i<= 255 ; i++)
    {
        printf("ASCII value of %d = \t%c  %x \t\n",i,i,i);
    }

} 
int main() 
{  
    
    DisplayASCII();    
    
    return 0; 
}