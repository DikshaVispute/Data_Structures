#include<stdio.h>
#include<stdlib.h>

#pragma pack (1)
struct node
{
    int data;
    struct node * next;     //self refferential structure
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFist(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      // LL is empty
    {
        *first =  newn;
    }
    else                   // LL contains atleast one node
    {
        newn->next = *first;
        (*first) = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      // LL is empty
    {
        (*first) =  newn;
    }
    else                   // LL contains atleast one node
    {
        
    }
}

int main()
{
    PNODE head = NULL;

    InsertFist(&head,51);
    InsertFist(&head,21);
    InsertFist(&head,11);

    return 0;
}