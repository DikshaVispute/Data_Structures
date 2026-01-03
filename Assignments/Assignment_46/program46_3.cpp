#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE first;

    public:
        SinglyLL()
        {
            this->first = NULL;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                this->first = newn;
            }
            else
            {
                newn->next = this->first;
                this->first = newn;
            }
        }

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : IsEmpty
//  Description :   It is used to check whether the linked list is empty
//  Input :         void
//  Output :        bool
//  Auther :        Diksha Kadu Vispute
//  Date :          04/01/2026
//
///////////////////////////////////////////////////////////////////////////

        bool IsEmpty()
        {
            if(first == NULL)
            {
                return true;
            }
            else
            {
                return false;
            }           
        }
};

int main()
{
    SinglyLL sobj;
    bool bRet = 0;

    sobj.InsertFirst(111);
    sobj.InsertFirst(11);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(21);

    bRet = sobj.IsEmpty();

    if(bRet == true)
    {
        cout<<"Linked list is empty\n";
    }
    else
    {
        cout<<"Linked list is not empty\n";
    }

    return 0;
}