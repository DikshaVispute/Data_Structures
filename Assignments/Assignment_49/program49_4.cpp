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
//  Function Name : DisplayDivByFive
//  Description :   It is used to Display numbers divisible by Five
//  Input :         void
//  Output :        boolean
//  Auther :        Diksha Kadu Vispute
//  Date :          10/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void DisplayDivByFive()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCount = 0;

            cout<<"Numbers divisible by Five : \n";

            while(temp != NULL)
            {
                if((temp->data % 5) == 0)
                {
                    cout<<temp->data<<"\n";
                }
            
                temp = temp->next;
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(110);
    sobj.InsertFirst(51);
    sobj.InsertFirst(10);
    sobj.InsertFirst(11);
    sobj.InsertFirst(21);

    sobj.Display();

    sobj.DisplayDivByFive();

    return 0;
}