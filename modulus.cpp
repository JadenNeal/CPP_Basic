#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // cout << "double / float = " << 10.0 / 3.0f * 1e7;  // double / float = double

    // type change
    float tree = 3;
    int guess(3.9832);
    // int debt = 7.2e12; // INT_MAX = 2 ** 31 - 1 < 7.2e12

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    // cout << "debt = " << debt << endl;

    // const int code = 66;
    // int x = 66;
    // char c1 {31325}; // narrowing, not allowed
    // char c2 {66};    // allowed, char can hold 66
    // char c3 {code};  // allowed, code is a constant and char can hold 66
    // char c4 {x};     // not allowed, x is variable
    // x = 31325;
    // char c5 = x;     // allowed

    // int cards[4] = {10, 9, 8};
    // cout << cards[0] << " " << cards[3];

    // int cards[4];
    // cout << cards[0];

    return 0;
}