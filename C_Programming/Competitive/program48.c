#include<stdio.h>

int KMToMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter Distance in KM  : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("KMToMeter is : %d ",iRet);
    return 0;
}