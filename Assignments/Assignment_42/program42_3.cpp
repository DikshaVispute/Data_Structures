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
//  Function Name : Addition
//  Description :   It is used to return addition of all elements in a linked list
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int Addition()
        {
            int iSum = 0;
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                iSum = iSum + temp->data;
                temp = temp->next;
            }

            return iSum;            
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    iRet = sobj.Addition();

    cout<<"Addition of all elements in linked list is : "<<iRet<<"\n";

    return 0;
}