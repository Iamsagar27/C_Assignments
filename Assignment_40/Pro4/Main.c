/*
4. Write a program which return second maximum element from singly linear linked list.  
Function Prototype :int SecMaximum( PNODE Head);  

Input linked list : |110|->|230|->|320|->|240|  
Output : 240
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

int SecMaximum(PNODE Head)
{
    PNODE temp = Head;

    int iMax = 0;   
    int iSecMax = 0;    

    while(temp != NULL)
    {
        if((temp->data)>iMax)
        {
            iSecMax = iMax;
            iMax = temp->data;
        }
        if((temp->data<iMax) && (temp->data>iSecMax))
        {
            iSecMax = temp->data;
        }        
        temp = temp->next;
    }
    return iSecMax;
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,240);
    Insert(&First,320);
    Insert(&First,230);
    Insert(&First,110);
    Display(First);

    iRet = SecMaximum(First);

    printf("\nSecond Maximum element in list is : %d\n",iRet);

    return 0;
}