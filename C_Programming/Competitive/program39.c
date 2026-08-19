#include<stdio.h>

double FhToCs(double iNo)
{
    double CF = 0.0;
    int Fahrenheit = 32;

    CF = ((iNo - 32) * (5.0/9.0));    
    return CF;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempurature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Tempurature Fahrenheit convert in Celsius %lf",dRet);

    return 0;
}