// Dear User Please note that ther have 2 part
// Both part working but part one seccessfull all time
// part 1 is work but see wrong answer

// Part 1:::::

#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    double input;
    cin >> input;
    int hundrade = input / 100;
    input = input - hundrade * 100;
    int fifty = input / 50;
    input = input - fifty * 50;
    int twenty = input / 20;
    input = input - twenty * 20;
    int ten = input / 10;
    input = input - ten * 10;
    int five = input / 5;
    input = input - five * 5;
    int two = input / 2;
    input = input - two * 2;
    // MOEDAS:
    int one = input / 1;
    input = input - one * 1;
    int point_one = input / .50;
    input = input - point_one * .50;
    int p_tf = input / .25;
    input = input - p_tf * .25;
    int p_t = input / .10;
    input = input - p_t * .10;
    int p_zf = input / .05;
    input = input - p_zf * .05;
    int p_zo = input / .01;
    input = input - p_zo * .01;

    cout << hundrade << " nota(s) de R$ 100.00" << endl;
    cout << fifty << " nota(s) de R$ 50.00" << endl;
    cout << twenty << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << five << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;

    cout << one << " moeda(s) de R$ 1.00" << endl;
    cout << point_one << " moeda(s) de R$ 0.50" << endl;
    cout << p_tf << " moeda(s) de R$ 0.25" << endl;
    cout << p_t << " moeda(s) de R$ 0.10" << endl;
    cout << p_zf << " moeda(s) de R$ 0.05" << endl;
    cout << p_zo << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

// Part 2 Is sure Worked and done :::::

#include <iostream>

using namespace std;

int main()
{
    double N;
    int inteiro, aux, aux1;

    while (cin >> N)
    {

        inteiro = N;
        N = 100 * N;
        aux1 = N;

        cout << "NOTAS:\n";
        cout << inteiro / 100 << " nota(s) de R$ 100.00\n";
        aux = (inteiro % 100);
        cout << aux / 50 << " nota(s) de R$ 50.00\n";
        aux = (aux % 50);
        cout << aux / 20 << " nota(s) de R$ 20.00\n";
        aux = (aux % 20);
        cout << aux / 10 << " nota(s) de R$ 10.00\n";
        aux = (aux % 10);
        cout << aux / 5 << " nota(s) de R$ 5.00\n";
        aux = (aux % 5);
        cout << aux / 2 << " nota(s) de R$ 2.00\n";
        aux = (aux % 2);
        cout << "MOEDAS:\n";
        cout << aux / 1 << " moeda(s) de R$ 1.00\n";

        aux1 = aux1 % 100;
        cout << aux1 / 50 << " moeda(s) de R$ 0.50\n";
        aux1 = aux1 % 50;
        cout << aux1 / 25 << " moeda(s) de R$ 0.25\n";
        aux1 = aux1 % 25;
        cout << aux1 / 10 << " moeda(s) de R$ 0.10\n";
        aux1 = aux1 % 10;
        cout << aux1 / 5 << " moeda(s) de R$ 0.05\n";
        aux1 = aux1 % 5;
        cout << aux1 / 1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}