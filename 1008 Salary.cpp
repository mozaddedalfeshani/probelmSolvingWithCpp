#include <iostream>
#include <iomanip>
using namespace std;
float salary(float x, float y)
{
    return x * y;
}
int main()
{
    int number;
    cin >> number;
    float count, money;
    cin >> count >> money;
    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary(count, money) << endl;
}