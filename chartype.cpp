#include <iostream>
using namespace std;
int main()
{
    // char type
    // char ch = 'H';
    // cout << ch << endl;
    // printf("the char is %c", ch);

    // more char.cpp
    char ch = 'M';  // ch is an Integer actually.
    int i = ch;
    cout << "The ASCII code of " << ch << " is " << i << endl;

    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "using cout.put(ch)" << endl;
    cout.put(ch);
    cout.put('!');
    cout << "\n\a Don't do it again!";  // \a means to ring the bell.
    return 0;
}