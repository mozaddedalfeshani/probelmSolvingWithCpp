#include <iostream>
using namespace std;
class solution
{
public:
    void insertationSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int current = arr[i];
            int currentIndex = i;
            int beforeIndex = i - 1;
            while (beforeIndex >= 0 && current < arr[beforeIndex])
            {
                std::swap(arr[currentIndex], arr[beforeIndex]);
                currentIndex--;
                beforeIndex--;
            }
        }
    }

private:
    int n;
};
int main()
{
    int arr[] = {6, 2, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution ob;
    ob.insertationSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}