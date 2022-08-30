#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float x1, x2, y1, y2;
    float answer;
    cin >> x1 >> y1 >> x2 >> y2;

    float xdif = pow((x2 - x1), 2);
    float ydif = pow((y2 - y1), 2);
    answer = xdif + ydif;
    cout << fixed;
    cout << setprecision(4) << sqrt(answer) << endl;
    return 0;
}