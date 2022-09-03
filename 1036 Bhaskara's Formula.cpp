#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{

    double a, b, c, r1;
    double first_line, r2;
    cin >> a >> b >> c;
    if (((b * b) - 4 * a * c) < 0 || (a == 0))
    {
        cout << "Impossivel calcular\n";
    }

    else

    {

        first_line = b * b - 4 * a * c;
        first_line = sqrt(first_line);
        first_line = -b + first_line;
        r1 = first_line;
        r1 = r1 / (2 * a);

        first_line = b * b - 4 * a * c;
        first_line = sqrt(first_line);
        first_line = -b - first_line;
        r2 = first_line;
        r2 = r2 / (2 * a);

        cout << fixed;
        cout << setprecision(5);
        cout << "R1 = " << r1 << endl
             << "R2 = " << r2 << endl;
    }
    return 0;
}