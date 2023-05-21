#include <iostream>
using namespace std;
int stoneToLb(int);

int main()
{
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stoneToLb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stoneToLb(int sts)
{
    return 14 * sts;
}