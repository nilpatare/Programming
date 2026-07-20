#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt % 2 == 0])
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0;
    int iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter Number of Element : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountEven(Brr, iLength);

    printf("Even elements are : %d\n",iRet);

    free(Brr);

    return 0;
}