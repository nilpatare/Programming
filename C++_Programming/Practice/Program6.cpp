#include<iostream>
using namespace std;

float AddTwoNumber(float iNo1, float iNo2)
{
    float fAns = 0.0f;
    fAns = iNo1 + iNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                   // To Store First Input
    float fValue2 = 0.0f;                   // To Store Second Input
    float fResult = 0.0f;                   // To Store the Result

    cout<<"Enter First Number : ";
    cin>>fValue1;
    
    cout<<"Enter Second Number : ";
    cin>>fValue2;

    fResult = AddTwoNumber(fValue1,fValue2);

    cout<<"Addition is : "<<fResult;

    return 0;
}