#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;

int main()
{
    // Integer will not report overflow errors
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "sam: " << sam << endl;
    cout << "sue: " << sue << endl;
    sam += 1;
    sue += 1;
    cout << "new sam: " << sam << endl;
    cout << "new sue: " << sue << endl;

    sam = sue = ZERO;
    cout << "new new sam: " << sam << endl;
    cout << "new new sue: " << sue << endl;

    sam -= 1;
    sue -= 1;
    cout << "new new new sam: " << sam << endl;
    cout << "new new new sue: " << sue << endl;
    return 0;
}