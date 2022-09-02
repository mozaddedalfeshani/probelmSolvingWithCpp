#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    if (row % 2 != 0)
    {
        if (col % 2 == 0)
        {
            cout << "0" << endl;
        }
        else if (col % 2 != 0)
        {
            cout << "1" << endl;
        }
    }
    else if (row % 2 == 0)
    {
        if (col % 2 == 0)
        {
            cout << "1" << endl;
        }
        else if (col % 2 != 0)
        {
            cout << "0" << endl;
        }
    }
}