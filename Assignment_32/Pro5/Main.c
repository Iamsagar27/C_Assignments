/*
5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and 
last bit means bit number 32.
*/

#include<stdio.h>
typedef unsigned int UINT;

int Toggle(UINT iNo)
{
	int i = 0,k = 0, j = 0,iPos = 0;
	UINT iNew = 0;
	int arr[32] = {0};
	iNew = iNo;
	printf("\n\nBinary before toggling first and last nibble of number :\t");
	while(iNew != 0)
	{
		arr[i] = iNew % 2;
		iNew = iNew / 2;
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
	for(iPos = 0;iPos <= 3;iPos++)
	{
		if(arr[iPos] == 0)
		{
			arr[iPos] = 1;
		}
		else
		{
			arr[iPos] = 0;
		}
	}
	for(iPos = i-1;iPos >= i-4 ;iPos--)
	{
		if(arr[iPos]== 0)
		{
			arr[iPos] = 1;
		}
		else
		{
			arr[iPos] = 0;
		}
	}
	printf("\nBinary After toggling first and last nibble of number :\t");
	for(j = 0,k = 1;j < i;j++)
	{
		printf("%d ",arr[j]);
		iNew += (arr[j]*k);
		k *= 2;
	}
	printf("\n");
	return iNew;
}
int main()
{
	UINT iNo = 0,iAns = 0;

	printf("\nEnter Number :\t:");
	scanf("%d",&iNo);

	iAns = Toggle(iNo);

	printf("%d\n",iAns);

	return 0;
}


