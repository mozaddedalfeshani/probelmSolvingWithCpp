#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1 || arr[i] == 2)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << (arr[i] - 1) / 2 << endl;
        }
    }
}
