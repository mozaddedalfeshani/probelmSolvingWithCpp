#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int product_code, q;
    int last_value;
    int i;
    double sum;
    double total = 0;

    cin >> last_value; // input the last value for for loop

    for (i = 1; i <= last_value; i++)
    {
        cin >> product_code >> q;

        if (product_code == 1001)
        {
            total = 1.50 * q;
        }
        else if (product_code == 1002)
        {
            total = 2.50 * q;
        }
        else if (product_code == 1003)
        {
            total = 3.50 * q;
        }
        else if (product_code == 1004)
        {
            total = 4.50 * q;
        }
        else if (product_code == 1005)
        {
            total = 5.50 * q;
        }
        sum = sum + total;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << sum << endl;
    return 0;
}