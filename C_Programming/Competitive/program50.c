#include<stdio.h>

double SquareMeter(double iNo)
{
    double dSquareMeter = 0.0929;

    return iNo * dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area and square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Tempurature Fahrenheit convert in Celsius %lf",dRet);

    return 0;
}