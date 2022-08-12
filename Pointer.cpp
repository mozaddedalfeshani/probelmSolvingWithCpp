#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, min;

    cin >> a >> b;
    sum = a + b;

    min = a - b;

    if (min < 0)
    {
        min = min * (-1);
    }

    cout << sum << endl
         << min << endl;

    return 0;
}
