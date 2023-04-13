#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

    int distance;
    float liter;
    cin >> distance >> liter;
    cout << fixed << setprecision(3)
         << distance / liter << " km/l" << endl;
    return 0;
}