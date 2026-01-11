#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Used to return largest of 3 elements
//  Input :         3 elements
//  Output :        greater element
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Value1 = 0, Value2 = 0, Value3 = 0;
    int Ret = 0;

    cout<<"Enter the first value :\n";
    cin>>Value1;

    cout<<"Enter the second value :\n";
    cin>>Value2;

    cout<<"Enter the third value :\n";
    cin>>Value3;

    Ret = Max(Value1, Value2, Value3);

    cout<<"maximum of these elements is : "<<Ret<<"\n";

    return 0;
}