#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    char name[100];

    double salary, sell, result;
    cin >> name;
    cin >> salary >> sell;
    sell = sell * .15;

    salary = salary + sell;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}