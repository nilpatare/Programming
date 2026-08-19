#include<stdio.h>

int KMToMeter(int iNo)
{
    int iKMTM = 0;
    iKMTM = iNo * 1000;
   
    return iKMTM;
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