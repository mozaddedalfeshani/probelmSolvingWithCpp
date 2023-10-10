// Merge sort programming
// Time Complexity: O(nlogn)
// Space Complexity: O(n)
#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    vector<int> temp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= r)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
        cout << i << " ";

    return 0;
}