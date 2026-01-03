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
//  Function Name : DisplayPrime
//  Description :   It is used to return minimum element
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void DisplayPrime()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCnt = 0,iCount = 0;

            while(temp != NULL)
            {
                for(iCnt = 2,iCount = 0; iCnt < temp->data/2; iCnt++)
                {
                    if((((temp->data) % iCnt ) == 0))
                    {
                        iCount++;
                        break;
                    }
                }
                
                if(iCount == 0)
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

    sobj.InsertFirst(89);
    sobj.InsertFirst(6);
    sobj.InsertFirst(41);
    sobj.InsertFirst(17);
    sobj.InsertFirst(20);
    sobj.InsertFirst(11);

    sobj.DisplayPrime();

    return 0;
}