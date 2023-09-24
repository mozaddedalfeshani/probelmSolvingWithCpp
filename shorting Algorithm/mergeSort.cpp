#include <iostream>
using namespace std;
void addingNow(int st, int mid, int en, int arr)
{

}
void divide(int st, int en, int arr[])
{
    if (st <= en)
    {
        return;
    }
    int mid = st + (en - st) / 2;
    divide(st, mid + 1, arr);
    divide(mid, en, arr);
    addingNow(st, mid, en, arr);
}
int main()
{

    int arr[] = {1, 2, 5, 3, 56, 2};
    return 0;
}