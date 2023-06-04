#include <iostream>
using namespace std;
int main()
{
    // instr1.cpp
    const int ArySize = 20;
    char name[ArySize];
    char dessert[ArySize];
    int year;
    cout << "Enter year: \n";
    (cin >> year).get();
    cout << "Enter your name:\n";
    cin.getline(name, ArySize);          // method 1
    // cin.get(name, ArySize).get();     // method 2
    cout << "Enter your favorite dessert:\n";
    cin.getline(name, ArySize);
    // cin.get(dessert, ArySize).get();
    cout << "name: " << name << " and dessert: " << dessert << endl;

    return 0;
}