#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMin
//  Description :   Used to return Second smallest element from arrray
//  Input :         array, Size of array
//  Output :        second smallest element
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T SecondMin(T Brr[], int iSize)
        {
            int iCnt = 0;
            T Min1 = 0,  Min2 = 0;

            for(iCnt = 0, Min1 = Brr[0]; iCnt <iSize; iCnt++)
            {
                if(Brr[iCnt] < Min1)
                {
                    Min1 = Brr[iCnt];
                }
            }

            for(iCnt = 0, Min2 = Brr[0]; iCnt <iSize; iCnt++)
            {
                if((Brr[iCnt] < Min2) && (Brr[iCnt] > Min1))
                {
                    Min2 = Brr[iCnt];
                }
            }

            return Min2;
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
    
    iRet = dobj->SecondMin(Arr, iLength);

    cout<<"Second smallest elememt from the array is : "<<iRet<<"\n";

    delete[] Arr;

    return 0;
}