#include <iostream>
using namespace std;
char* build_str(char, int);  // prototype

int main()
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter repeat times: ";
    cin >> times;

    char* ps = build_str(ch, times);
    cout << ps << endl;
    delete [] ps;

    return 0;
}

char* build_str(char ch, int n)
{
    char* pstr = new char[n+1];
    pstr[n] = '\0';
    while (n > 0)
    {
        pstr[n] = ch;
        n--;
    }
    return pstr;
}