#include <iostream>
using namespace std;
int main()
{
    int num[4];
    int i, j;
    for (int i = 1; i <= 4; i++)
    {
        cin >> num[i];
    }
    int max = num[1];
    for (j = 1; j <= 4; j++)
    {
        if (num[j] > max)
        {
            max = num[j];
        }
    }
    cout << max << endl;

    return 0;
}
