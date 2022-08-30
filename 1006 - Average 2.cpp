#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, MEDIA = 0;
    cin >> A >> B >> C;
    A = A * 2;
    B = B * 3;
    C = C * 5;
    MEDIA = (A + B + C) / (2 + 3 + 5);
    cout << fixed;
    cout << setprecision(1) << "MEDIA = " << MEDIA << endl;
    return 0;
}
