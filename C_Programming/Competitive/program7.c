#include<stdio.h>
void Display(int iNo)
{
while(iNo > 0)
{
    printf("*");
    iNo--;
}
}
int main()
{
    int iValue = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    return 0;
}