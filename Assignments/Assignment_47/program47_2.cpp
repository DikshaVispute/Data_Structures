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
//  Function Name : countDigits
//  Description :   It is used to count digits of each node
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          05/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void CountDigits()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCount = 0, iNo = 0;
            
            while(temp != NULL)
            {
                iCount = 0;
                iNo = temp ->data;

                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo/10;
                }

                cout<<"Digits in "<<temp->data<<" = "<<iCount<<"\n";
                temp = temp->next;
            }

        }
};

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(111);
    sobj.InsertFirst(11);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(21);

    sobj.CountDigits();

    return 0;
}