#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double pi = 3.14159;
    double n, area;

    cin >> n;
    area = pi * n * n;
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}