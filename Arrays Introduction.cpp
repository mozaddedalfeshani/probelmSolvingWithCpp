#include <iostream>
using namespace std;
int main()
{

    int as;

    cin >> as;
    int array[as];

    for (int i = 1; i <= as; i++)
    {
        cin >> array[i];
    }
    for (int j = as; j >= 1; j--)
    {
        cout << array[j] << " ";
    }

    return 0;
}
