/*
3. Write a program which display product of all digits of all element from singly linear linked list. (Don’t consider 0)  
Function Prototype : 
void DisplayProduct( PNODE Head);  

Input linked list : |11|->|20|->|32|->|41|  
Output :   1 2 6 4
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head , int iValue)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn ->data = iValue ;
    newn ->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn ;
    }
    else 
    {
        newn ->next = *Head ;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    
    while (Head != NULL)
    {
        printf("| %d | ->",Head ->data);
        Head = Head-> next;    
    }
    printf("NULL\n");
}

void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iProduct = 0;

    while(Head != NULL)
    {
        iProduct = 1;

        while(Head->data != '\0')
        {
            iDigit = Head->data % 10;
            if( iDigit == 0 )
            {
                iDigit = 1;
            }
            iProduct = iProduct * iDigit;
            Head->data = Head->data / 10 ;
        }
         printf("%d\t",iProduct);
        Head = Head->next;
    }
    printf("\n");
    
}

int main()
{
    PNODE First = NULL;
    int no = 0 , i = 0 , num = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&num);
    
    for(i = 1 ; i <=num ; i++)
    {
        printf("Enter the number :\t");
        scanf("%d",&no);
        InsertFirst(&First,no);
    }

    DisplayProduct(First);

    return 0;
}







