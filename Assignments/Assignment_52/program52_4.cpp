#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Used to return Maximum of all the elements
//  Input :         Array, Size of array
//  Output :        Maximum
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T Max(T Brr[], int iSize)
        {
            int iCnt = 0;
            T Max = 0;

            for(iCnt = 0, Max = Brr[0]; iCnt <iSize; iCnt++)
            {
                if(Max < Brr[iCnt])
                {
                    Max = Brr[iCnt];
                }
            }

            return Max;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    int iRet = 0;
    //char Value = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    //cout<<"Enter  the value to search :\n";
    //cin>> Value;

    int *Arr = new int[iLength];

    cout<<"Enter the elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";
    
    iRet = dobj->Max(Arr, iLength);

    cout<<"Maximum of all the elements is : "<<iRet<<"\n";

    delete[] Arr;

    return 0;
}