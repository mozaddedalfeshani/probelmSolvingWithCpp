#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, med;
    cin >> a >> b;
    med = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << med << endl;
    return 0;
}
