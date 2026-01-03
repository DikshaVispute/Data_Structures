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
//  Function Name : DisplayOdd
//  Description :   It is used to count Odd nodes
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void DisplayOdd()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCount = 0;

            while(temp != NULL)
            {
                if(((temp->data) % 2) != 0)
                {
                    cout<<temp->data<<"\n";
                }
                
                temp = temp->next;
            }
        }
};

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(111);
    sobj.InsertFirst(102);
    sobj.InsertFirst(51);
    sobj.InsertFirst(22);
    sobj.InsertFirst(10);

    sobj.DisplayOdd();

    return 0;
}