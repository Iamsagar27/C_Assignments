/*
5. Write a program which display addition of digits of element from singly linear linked list.  
Function Prototype :int SumDigit( PNODE Head);  

Input linked list : |110|->|230|->|20|->|240|->|640|  
Output :  2 5 2 6 10 
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

int SumDigit(PNODE Head)
{
    PNODE temp = Head;
    int iNum = 0;
    int iSum = 0;

    printf("\nSum of digits is :\t");

    while(temp != NULL)
    {
        iSum = 0;
        while(temp->data!=0)
        {
            iNum = temp->data % 10;
            iSum = iSum + iNum;
            temp->data = temp->data / 10;
        }
        printf("%d\t",iSum);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,640);
    Insert(&First,240);
    Insert(&First,20);
    Insert(&First,230);
    Insert(&First,110);
    Display(First);

    SumDigit(First);

    return 0;
}


