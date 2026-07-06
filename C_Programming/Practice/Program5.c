#include<stdio.h>
int main()
{
    float fValue1 = 0.0f;                   // To Store First Input
    float fValue2 = 0.0f;                   // To Store Second Input
    float fResult = 0.0f;                   // To Store the Result

    printf("Enter First Number  : ");
    scanf("%f",&fValue1);

    printf("Enter Second Number : ");
    scanf("%f",&fValue1);

    fResult = fValue1 + fValue2;            // Perform the addition
    
    printf("Addition is         : %f\n",fResult);

    return 0;
}

