#include <iostream>
using namespace std;

int main()
{
    int i = 0, n[5], dec = 0, inc = 0; // variable declaration

    // Input section
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    // Checking Incressing
    for (int i = 1; i < 5; i++)
    {
        if (n[i] > n[i - 1])
        {
            inc += 1;
        }
        if (n[i] < n[i - 1])
        {
            dec += 1;
        }
    }
    if (inc == 4)
        cout << "C\n";
    else if (dec == 4)
        cout << "D\n";
    else
        cout << "N\n";
    return 0;
}