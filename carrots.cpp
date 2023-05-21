#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int carrots;  // number of carrots
    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots." << endl;
    carrots -= 1;
    cout << "Crunch, Now i have " << carrots << "carrots." << endl;
    return 0;
}