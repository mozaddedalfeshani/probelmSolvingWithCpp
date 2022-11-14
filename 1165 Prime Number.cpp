#include <iostream>
using namespace std;
int checker(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    int n1, n;
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
        cin >> n;
        if (checker(n) == false)
        {
            cout << n << " nao eh primo" << endl;
        }
        else
        {
            cout << n << " eh primo" << endl;
        }
    }
}