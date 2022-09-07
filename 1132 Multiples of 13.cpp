#include <iostream>
using namespace std;
int main()
{
    int first, last, sum = 0;

    cin >> first >> last;
    for (short int i = first; i <= last; i++)
    {
        if (i % 13 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;

    return 0;
}