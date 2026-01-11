#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:
        T No1;
        T No2;

        Demo(T A,T B)
        {
            this->No1 = A;
            this->No2 = B;
        }

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Used to return multiply of 2 elements
//  Input :         nothing
//  Output :        Multiply
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////
        T Multiply()
        {
            T Ans = 0;

            Ans = No1 * No2;

            return Ans;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo <int>(11,10);
    int iRet = 0;

    iRet = dobj->Multiply();

    cout<<"Multiplication of the elements is : "<<iRet<<"\n";

    return 0;
}