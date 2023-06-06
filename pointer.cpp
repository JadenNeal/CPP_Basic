#include <iostream>
using namespace std;
int main()
{
    int update = 6;
    int * p_update;
    p_update = &update;

    // express value
    cout << "update = " << update << endl;
    cout << "*p_update = " << *p_update << endl;

    // express address
    cout << "update address is " << &update << endl;
    cout << "p_update is " << p_update << endl;

    // use pointer to change value
    * p_update += 1;
    cout << "Now update value is " << update << endl;
    return 0;
}