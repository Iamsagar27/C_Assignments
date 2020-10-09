/*1. Write a recursive program which display below pattern.  

Output :   * * * * * 
*/
#include<stdio.h>

void DisplayR() 
{  
    static int i = 1;
    
    if(i <=5)
    {
        printf(" * ");
        i++;
        DisplayR();    
    } 
} 

int main() 
{  
    DisplayR(); 
 
    return 0; 
} 