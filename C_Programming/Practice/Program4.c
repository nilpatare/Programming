/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        Perform Addition of No1 & No2
        Display The Result

    STOP
*/

#include<stdio.h>
int main()
{
    // Variable Creation with default values
    float i = 0.0f,j = 0.0f,k = 0.0f;

    printf("Enter First Number  : ");
    scanf("%f",&i);

    printf("Enter Second Number : ");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is         : %f\n",k);

    return 0;
}