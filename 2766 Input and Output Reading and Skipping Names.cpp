#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    string input[11];
    for (short int i = 1; i <= 10; i++)
    {
        cin >> input[i];
    }
    // cout << "working" << endl;
    cout << input[3] << endl;
    cout << input[7] << endl;
    cout << input[9] << endl;

    return 0;
}