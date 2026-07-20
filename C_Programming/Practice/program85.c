#include<stdio.h>
#include<stdlib.h>

int CountFrequncy(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    iRet = CountFrequncy(Brr, iLength);

    printf("Frequency : %d\n",iRet);

    free(Brr);

    return 0;
}