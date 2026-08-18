#include<stdio.h>

int DollerToINR(int iNo)
{
    int iDoller = 0;
   
    iDoller = iNo * 70;
    
    return iDoller;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter US Doller : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Indian Money is %d ",iRet);
    return 0;
}