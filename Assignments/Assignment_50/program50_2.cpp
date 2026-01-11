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
//  Function Name : DisplayGreaterThanAvg
//  Description :   Used to display numnbers greater than average
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void DisplayGreaterThanAvg()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iSum = 0, iAvg = 0;

            while(temp != NULL)
            {
                iSum = iSum + temp->data;
                temp = temp->next;
            }  

            iAvg = iSum/this->iCount;
            cout<<"Average is : "<<iAvg<<"\n";

            cout<<"elements greater than Average are :\n";

            temp = this->first;
            while(temp != NULL)
            {
                if(temp->data > iAvg)
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

    sobj.InsertFirst(50);
    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.Display();

    sobj.DisplayGreaterThanAvg();

    return 0;
}