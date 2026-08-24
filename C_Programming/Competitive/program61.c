#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 1;
    int iEvenSum = 0;
    int iOddSum = 0;
    int Diff = 0;

    for(iCnt = 0 ; iCnt <= iLength-1; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    Diff = iEvenSum - iOddSum;
    return Diff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    
    printf("Enter The Number Of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unabale to Allocate Memory ");
        return -1;
    }
    
    printf("Enter %d Element\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet= Difference(p,iSize);

    printf("Result is : %d",iRet);

    free(p);

    return 0;
}