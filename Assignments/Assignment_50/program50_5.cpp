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
        int iCount;

    public:
        SinglyLL()
        {
            this->first = NULL;
            this->iCount = 0;
        }

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description :   It is used to insert element at first position in linked list
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          10/01/2026
//
///////////////////////////////////////////////////////////////////////////

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

            this->iCount++;
        }

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to Display elements in a linked list
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          10/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void Display()
        {
            PNODE temp = NULL;
            temp = this->first;

            cout<<"Linked list :\n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }

            cout<<"NULL\n";
        }

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayAlternate
//  Description :   Used to check whether the list is sorted or not
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void DisplayAlternate()
        {
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                cout<<temp->data<<"\n";
                temp = temp->next->next;
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(50);
    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.Display();

    sobj.DisplayAlternate();

    return 0;
}