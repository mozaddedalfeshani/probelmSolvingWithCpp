/*
This buble sort algorithm is not efficient as it takes O(n^2) time complexity.

*/
#include <iostream>
using namespace std;
void bubleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}
int main()
{
    int arr[] = {2, 3, 1, 5, 4};
    bubleSort(arr, 5);
    cout << "Sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}