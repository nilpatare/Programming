#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

        public:
        // Paramterise Constructor with default argument
        ArrayX(int X = 5)           // Default argument mhantat hya constructor la    aani nantar khaali 5 khodun 15 honar  5 override honar
        {
            iSize = X;                       
            Arr = new int[iSize];         
        }

        ~ArrayX()
        {
            delete[] Arr;                   
        }
};

int main()
{
    ArrayX *aobj1 = new ArrayX;             // Paramterised constructor
    ArrayX *aobj2 = new ArrayX(15);          // Paramterised constructor  

    // Function Call
    

    delete aobj1;
    delete aobj2;

    return 0;
}