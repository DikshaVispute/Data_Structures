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
//  Function Name : DisplayReverse
//  Description :   It is used to display list in reverse order
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          05/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void DisplayReverse()
        {
            PNODE temp = NULL;
            temp = this->first;
            int Arr[100];
            int i = 0, j = 0;

            while(temp != NULL)
            {
                Arr[i] = temp->data;
                i++;
                temp = temp->next;
            }

            for(j = i-1; j >= 0; j--)
            {
                cout<<" | "<<Arr[j]<<" |->";
            }

            cout<<"NULL\n";
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

    cout<<"Reversed List is : \n";
    sobj.DisplayReverse();

    return 0;
}