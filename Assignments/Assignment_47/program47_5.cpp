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
//  Function Name : CountPrime
//  Description :   It is used to count prime numbers from the list
//  Input :         void
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          10/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int CountPrime()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCnt = 0,iCount = 0, iPrime = 0;
            
            while(temp != NULL)
            {
                for(iCnt = 2,iCount = 0; iCnt < temp->data/2; iCnt++)
                {
                    if(temp->data % iCnt == 0)
                    {
                        iCount++;
                        break;
                    }
                }

                if(iCount == 0)
                {
                    iPrime++;
                }

                temp = temp->next;
            }

            return iPrime;
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(111);
    sobj.InsertFirst(11);
    sobj.InsertFirst(13);
    sobj.InsertFirst(10);
    sobj.InsertFirst(21);

    iRet = sobj.CountPrime();

    cout<<"Numbers of prime numbers in a linked list is: "<<iRet<<"\n";

    return 0;
}