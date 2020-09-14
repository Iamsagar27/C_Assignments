/*
2. Write a program which display all palindrome elements of singly linked list.  
Function Prototype : 
void DisplayPallindrome( PNODE Head);  

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|  
Output :  11 6 414 
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

void Pallindrome(PNODE Head)
{
    int iElement = 0;
    int iTemp = 0;
    int iDigit = 0;

    while(Head!=NULL)
    {
        iElement = 0;
        iTemp = Head->data;
        while(Head->data!=0)
        {
            iDigit = Head->data % 10;
            iElement = ((iElement * 10) + (iDigit));
            Head->data = Head->data / 10;
        }
        if(iElement==iTemp)
        {
            printf("%d\t",iElement);
        }    
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

    Pallindrome(First);

    return 0;
}

