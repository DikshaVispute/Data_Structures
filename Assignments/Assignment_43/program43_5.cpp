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
//  Function Name : SumDigit
//  Description :   It is used to return Addition of the digits of elements
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void SumDigit()
        {
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                int iNo = temp->data;
                int iSum = 0;

                while(iNo > 0)
                {
                    iSum = iSum + (iNo % 10);
                    iNo = iNo / 10;
                }

                cout<<"Sum of digits of "<<temp->data <<" = "<<iSum<<"\n";
                temp = temp->next;
            }
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(240);
    sobj.InsertFirst(320);
    sobj.InsertFirst(230);
    sobj.InsertFirst(110);

    sobj.SumDigit();

    return 0;
}