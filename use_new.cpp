#include <iostream>
using namespace std;
int main()
{
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;

    cout << "nights value = " << nights << " and address is " << &nights << endl;
    cout << "int value = " << *pt << " and location is " << pt << endl;

    double* pd = new double;
    *pd = 1001.0;

    cout << "size of pt = " << sizeof(pt) << "; size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << "; size of *pd = " << sizeof(*pd) << endl;

    return 0;
}