#include <iostream>
using namespace std;
int main()
{

    long long int a, b;
    short int i;
    long long int sum = 0;
    cin >> a >> b;

    sum = (a + b) * (b - a + 1) / 2; // formula if first and last value have
    // for (i = first_value; i <= last_value; i++)
    // {
    //     sum += i;               // don't use loop, it's take time
    // }
    cout << sum << endl;

    return 0;
}