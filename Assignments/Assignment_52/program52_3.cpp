#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AddN
//  Description :   Used to return Addition of all the elements
//  Input :         Array, Size of array
//  Output :        Addition
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T AddN(T Brr[], int iSize)
        {
            int iCnt = 0;
            T Sum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                Sum = Sum + Brr[iCnt];
            }

            return Sum;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <double> *dobj = new Demo<double>();
    int iLength = 0, iCnt = 0;
    double iRet = 0;
    //char Value = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    //cout<<"Enter  the value to search :\n";
    //cin>> Value;

    double *Arr = new double[iLength];

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
    
    iRet = dobj->AddN(Arr, iLength);

    cout<<"Addition of all the elements is : "<<iRet<<"\n";

    delete[] Arr;

    return 0;
}