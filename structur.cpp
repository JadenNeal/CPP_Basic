#include <iostream>
using namespace std;
struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };   // declaration suggested to be out
int main()
{ 
    // different init methods
    // inflatable guest = 
    // {
    //     "Jaden",
    //     1.88,
    //     29.99
    // };
    // inflatable duck {"Daphne", 0.12, 9.98};  // "=" can be omitted
    // inflatable mayor {};  // blank => all vars are set to 0

    // assgn a struct to another
    // inflatable chioce;
    // chioce = guest;

    return 0;
}