#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return((float)iSum / (float)iSize);
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(NULL == ptr)      // industrial way of coding 
    {
        printf("unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements : \n");    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }    

    fRet = Average(ptr,iLength);

    printf("average of elements is : %f\n",fRet);

    free(ptr);
    
    return 0;
}