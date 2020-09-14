/*
2. Write a program which displays all elements which are prime from singly linear linked list.  
Function Prototype :int DisplayPrime( PNODE Head);  

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|  
Output :  11 17 41 89
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

void DisplayPrime(PNODE Head)
{
    PNODE temp = Head;
    int iCnt = 0;
    int iFact = 0;

    printf("\nPime numbers are : ");

    while(temp != NULL)
    {
        iFact = 0;
        for(iCnt=1;iCnt<=((temp->data)/2);iCnt++)
        {
            if((temp->data % iCnt)==0)
            {
                iFact++;
            }
        }
        if(iFact==1)
        {
            printf("%d\t",temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,89);
    Insert(&First,22);
    Insert(&First,41);
    Insert(&First,17);
    Insert(&First,20);
    Insert(&First,11);
    Display(First);

    DisplayPrime(First);

    return 0;
}












