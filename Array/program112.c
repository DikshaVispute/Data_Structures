#include<stdio.h>


void Display(int *ptr)  // issue
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<=3; iCnt++)
    {
        printf("%d\n",*ptr);
    }
}


int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);     //Display(100);
    

    return 0;
}