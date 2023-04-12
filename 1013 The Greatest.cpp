#include <math.h>
#include <iostream>
using namespace std;

// This Function Return the Greater value beetween 2 value
int maxValue(int a, int b)
{
    int formula = (a + b + abs(a - b)); // This will give us greater value
    formula /= 2;
    return formula;
}
int main()
{
    // formula --> (a+b)+abs(a-b)_/ 2

    // variable
    int a, b, c;

    // input section
    cin >> a >> b >> c;

    // printing section
    cout << maxValue(maxValue(a, b), c) << " eh o maior" << endl;

    return 0;
}