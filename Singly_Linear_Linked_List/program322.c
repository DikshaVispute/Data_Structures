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
    PNODE temp = NULL;

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      // LL is empty
    {
        (*first) =  newn;
    }
    else                   // LL contains atleast one node
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)     // case 1
    {
        return;
    }
    else if((*first)->next == NULL)       // case 2
    {
        free(*first);
        *first = NULL;
    }
    else                    // case 3
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)     // case 1
    {
        return;
    }
    else if((*first)->next == NULL)       // case 2
    {
        free(*first);
        *first = NULL;
    }
    else             // case 3
    {
        temp = *first;
        while(temp->next->next != NULL)    
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }

    printf("NULL \n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFist(&head,75);
    InsertFist(&head,51);
    InsertFist(&head,21);
    InsertFist(&head,11);

    iRet = Count(head);
    Display(head);

    printf("number of nodes are : %d\n ",iRet);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    iRet = Count(head);
    Display(head);

    printf("number of nodes are : %d\n ",iRet);

    DeleteFirst(&head);

    iRet = Count(head);
    Display(head);

    printf("number of nodes are : %d\n ",iRet);

    DeleteLast(&head);

    iRet = Count(head);
    Display(head);

    printf("number of nodes are : %d\n",iRet);
    
    return 0;
}