#include<stdio.h>

float CircleArea(float fWidth, float fHeight)
{
    float Area = 0;

    Area = fWidth * fHeight;

    return Area;
}


int main()
{
    float fValue1 = 0.0f, fValue2 = 0;
    double dRet = 0.0;

    printf("Enter Width  : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = CircleArea(fValue1, fValue2);

    printf("Radius circle Calculate Area : %lf ",dRet);
    return 0;
}