#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (in decimal)" << endl;
    cout << "waist = " << waist << " (in hex)" << endl;
    cout << "inseam = " << inseam << "(in octal)" << endl;
    return 0;    
}