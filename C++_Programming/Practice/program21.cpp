#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Parameterise Constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor"<<endl;
            iSize = X;                       // Characteristics initialisation
            Arr = new int[iSize];           // Resource allocation
        }
        // Destructor
        ~ArrayX()
        {
            cout<<"Insdie destructor"<<endl;
            delete[] Arr;                   // Resource Deallocatiohn
        }
};

int main()
{
    ArrayX aobj1(5);                     

    return 0;
}