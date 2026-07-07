#include<iostream>
using namespace std;

float AddTwoNumbers(
                        float fNo1,         // First input
                        float fNo2          // Second input
                    )
{
    float fAns = 0.0f;                      // Variable to Store Result 
    fAns = fNo1 + fNo2;                     // Perform Addition
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
    
    fResult = AddTwoNumbers(fValue1,fValue2);

    cout<<"Addition is : "<<fResult;
    
    return 0;
}