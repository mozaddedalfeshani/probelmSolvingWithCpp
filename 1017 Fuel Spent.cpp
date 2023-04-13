#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    float ans = a * b / 12;
    cout << fixed << setprecision(3);
    cout << ans << endl;
    return 0;
}