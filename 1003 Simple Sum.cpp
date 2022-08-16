#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum;

    sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "SOMA = " << sum(a, b) << endl;

    return 0;
}