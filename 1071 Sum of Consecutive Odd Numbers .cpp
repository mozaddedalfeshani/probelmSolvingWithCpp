#include <iostream>
using namespace std;
int main()
{
    int sum = 0;

    int x, y, i;
    cin >> x >> y;

    if (x < y)
    {
        for (i = x + 1; i < y; i++)
        {
            // cout << "done1" << endl;
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }

    else if (y < x)
    {
        for (i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }

    cout << sum << endl;
    return 0;
}