#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Replace
//  Description :   Used to return Second smallest element from arrray
//  Input :         array, Size of array
//  Output :        second smallest element
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void Replace(T Brr[], int iSize, T oldVal, T newVal)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt <iSize; iCnt++)
            {
                if(Brr[iCnt] == oldVal)
                {
                    Brr[iCnt] = newVal;
                }
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    int Value1 = '\0', Value2 = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"\n";

    cout<<"Enter old value :\n";
    cin>> Value1;

    cout<<"Enter new value :\n";
    cin>> Value2;
    
    dobj->Replace(Arr, iLength, Value1, Value2);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    delete[] Arr;

    return 0;
}