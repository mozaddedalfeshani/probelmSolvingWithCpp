#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int small = a[0];
    int coought = 1;
    for (int i = 0; i < n; i++)
    {
        if (small > a[i])
        {
            small = a[i];
            coought = i + 1;
        }
    }
    cout << coought << endl;
    return 0;
}