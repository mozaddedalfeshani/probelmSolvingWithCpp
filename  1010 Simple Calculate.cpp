#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int productCode = 0;
    int count1, count2;
    float price1, price2;
    double total1;
    cin >> productCode >> count1 >> price1;
    cin >> productCode >> count2 >> price2;
    total1 = (count1 * price1) + (count2 * price2);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total1 << endl;

    return 0;
}