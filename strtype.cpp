#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2 = "dragon";
    cout << "Enter s1: \n";
    cin >> s1;
    cout << s1 << " ------ " << s2 << endl;

    string s3 = s1 + s2;  // + to connect multi strs
    cout << s3;
    return 0;
}