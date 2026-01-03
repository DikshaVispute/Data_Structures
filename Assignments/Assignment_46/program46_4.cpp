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
//  Function Name : ReplaceNegative
//  Description :   It is used to replace negative value with 0
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          04/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void ReplaceNegative()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCount = 0;

            while(temp != NULL)
            {
                if((temp->data) < 0)
                {
                    temp->data = 0;
                }
                
                cout<< temp->data<<"\n";
                temp = temp->next;
            }
        }
};

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(111);
    sobj.InsertFirst(-11);
    sobj.InsertFirst(11);
    sobj.InsertFirst(-10);
    sobj.InsertFirst(21);

    sobj.ReplaceNegative();

    return 0;
}