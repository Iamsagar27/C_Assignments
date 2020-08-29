/*
2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height) 

Input :  5.3  9.78 Output :  51.834 
*/

#include<stdio.h> 

double RectArea(float fWidth, float fHeight) 
{
      double fArea = 0;

      fArea = fWidth * fHeight;

      return fArea;
} 

int main() 
{  
    float fValue1 = 0.0, fValue2 = 0.0;  
    double dRet = 0.0; 
 
    printf("Enter width:\n");  
    scanf("%f",&fValue1); 
 
    printf("Enter height");  
    scanf("%f",&fValue2); 
 
    dRet = RectArea(fValue1, fValue2); 
 
    printf("The Area of Rectangle is %.3f\n",dRet); 
 
    return 0; 
}