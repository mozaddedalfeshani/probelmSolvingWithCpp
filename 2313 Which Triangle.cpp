#include <iostream>
#include <math.h>
#include <strings.h>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    string ans = "";
    cin >> a >> b >> c;
    if (a + c > b)
    {
        if ((a != b and b == c) or (a == c and a != b) or (a == b and c != b))
            ans = "Valido-Isoceles";
        else if (a == b and a == c)
            ans = "Valido-Equilatero";
        else if (a != b and b != c and a != c)
            ans = "Valido-Escaleno";
    }
    else
    {
        ans = "Invalido";
    }

    if (ans != "Invalido")
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) or pow(b, 2) == pow(a, 2) + pow(c, 2) or pow(c, 2) == pow(a, 2) + pow(b, 2))
            cout << ans << endl
                 << "Retangulo: S" << endl;
        else
            cout << ans << endl
                 << "Retangulo: N" << endl;
    }
    else
        cout << ans << endl;

    return 0;
}