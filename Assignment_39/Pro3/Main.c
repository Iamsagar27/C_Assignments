/*
3. Write a program which returns addition of all element from singly linear linked list.  
Function Prototype :int Addition( PNODE Head);  

Input linked list : |10|->|20|->|30|->|40|  
Output : 100 
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

void Insert(PPNODE Head , int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head ->next;
    }
    printf("NULL\n");
}

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head ->next; 
    }
    return iSum;
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,40);
    Insert(&First,30);
    Insert(&First,20);
    Insert(&First,10);
    Display(First);

    iRet = Addition(First);

    printf("\nAddition of elements is : %d\n",iRet);

    return 0;
}





