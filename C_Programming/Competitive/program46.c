#include<stdio.h>

float CircleArea(float fRadius)
{
    float Area = 0;
    float PI = 3.14;

    Area = PI * fRadius * fRadius;

    return Area;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Radius circle Calculate Area : %lf ",dRet);
    return 0;
}