#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Array lenth" << endl;
    cin >> n;
    int array[n];
    int left = 0;
    int target = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter target value" << endl;
    cin >> target;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (array[middle] == target)
        {
            cout << "Value cought " << middle << " position" << endl;
            return 0;
        }
        else if (array[middle] < target)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    cout << "failed" << endl;
    return 0;
}