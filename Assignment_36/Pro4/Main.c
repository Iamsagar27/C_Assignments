/*
4. Accept sing from user and reverse the contents of that string by toggling the case. 

Input :   “aCBdef” Output :   “FEDcbA” 
*/
#include<stdio.h>

void StrRevTogX(char *str) 
{  
    if( str == NULL)
    {
        return ;
    }
    
    char temp ='\0';  
    char *first,*last;  
    first = str;  
    last = str; 
    
     
    
    while(*last != '\0')  
    {   
        last++;  
    }  
    last--;  
     
    while(first <= last)  
    {   
        temp = *first;
        *first = *last;
        *last = temp;
        
        first++;
        last--;
    }
    last = str;
    while(*last != '\0')
    {
        if((*last >= 'a') && (*last <='z')) 
        {
            *last= *last - 32;
        } 
        else if ((*last >= 'A') && (*last <='Z'))
        {
            *last = *last + 32;
        }
        last++;
    }

    
} 

int main() 
{  
    char arr[50] = {'\0'};

    printf("Enter the string :");
    scanf("%[^\n]",arr);

    StrRevTogX(arr);     
    
    printf("%s",arr); // SUOLLEVRAm 
 
    return 0; 
}




