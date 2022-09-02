// #include <iomanip>

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << fixed;
//     if (x == 1)
//     {
//         cout << "Total: R$ " << setprecision(2) << y * 4.00 << endl;
//     }
//     else if (x == 2)
//     {
//         cout << "Total: R$ " << setprecision(2) << y * 4.50 << endl;
//     }
//     else if (x == 3)
//     {
//         cout << "Total: R$ " << setprecision(2) << y * 5.00 << endl;
//     }
//     else if (x == 4)
//     {
//         cout << "Total: R$ " << setprecision(2) << y * 2.00 << endl;
//     }
//     else if (x == 2)
//     {
//         cout << "Total: R$ " << setprecision(2) << y * 1.50 << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    double x1 = 4.00, x2 = 4.50, x3 = 5.00, x4 = 2.00, x5 = 1.50, ans = 0;

    cin >> x >> y;
    if (x == 1)
    {
        ans = x1 * y;
    }
    else if (x == 2)
    {
        ans = x2 * y;
    }
    else if (x == 3)
    {
        ans = x3 * y;
    }
    else if (x == 4)
    {
        ans = x4 * y;
    }
    else if (x == 5)
    {
        ans = x5 * y;
    }
    cout << fixed;
    cout << setprecision(2) << "Total: R$ " << ans << endl;

    return 0;
}
