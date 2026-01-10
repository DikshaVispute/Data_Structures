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
//  Function Name : SumDigits
//  Description :   It is used to display sum of digits of each node
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          05/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void SumDigits()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iSum = 0, iNo = 0;
            
            while(temp != NULL)
            {
                iSum = 0;
                iNo = temp ->data;

                while(iNo != 0)
                {
                    iSum = iSum +(iNo % 10);
                    iNo = iNo/10;
                }

                cout<<"Sum of digits in "<<temp->data<<" = "<<iSum<<"\n";
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

    sobj.SumDigits();

    return 0;
}