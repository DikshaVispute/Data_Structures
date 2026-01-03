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
//  Function Name : CountEven
//  Description :   It is used to count even nodes
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int CountEven()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCount = 0;

            while(temp != NULL)
            {
                if(((temp->data) % 2) == 0)
                {
                    iCount++;
                }
                
                temp = temp->next;
            }

            return iCount;
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(111);
    sobj.InsertFirst(102);
    sobj.InsertFirst(51);
    sobj.InsertFirst(22);
    sobj.InsertFirst(11);

    iRet = sobj.CountEven();

    cout<<"nodes containing even values are : "<<iRet<<"\n";

    return 0;
}