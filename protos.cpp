#include <iostream>
using namespace std;
int compute_cube(int);
int main()
{
    int x;
    cout << "Enter x:__\b\b";
    cin >> x;
    int res = compute_cube(x);
    cout << "cube(x) = " << res << endl;
    return 0;
}

int compute_cube(int x)
{
    return x * x * x;
}