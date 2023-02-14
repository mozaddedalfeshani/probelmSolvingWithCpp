#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

    double salary, salary2;
    double extra;
    cin >> salary;

    if (salary >= 0 && salary <= 400)
    {
        salary2 = (salary + salary * .15);
        extra = salary2 - salary;
        cout << fixed;

        cout << setprecision(2);
        cout << "Novo salario: " << salary2 << endl;
        cout << "Reajuste ganho: " << extra << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salary >= 440.01 && salary <= 800)
    {
        salary2 = (salary + salary * .12);
        cout << fixed;
        extra = salary2 - salary;

        cout << setprecision(2);
        cout << "Novo salario: " << salary2 << endl;
        cout << "Reajuste ganho: " << extra << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        salary2 = (salary + salary * .10);
        cout << fixed;
        extra = salary2 - salary;

        cout << setprecision(2);
        cout << "Novo salario: " << salary2 << endl;
        cout << "Reajuste ganho: " << extra << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        salary2 = (salary + salary * .07);
        cout << fixed;
        extra = salary2 - salary;

        cout << setprecision(2);
        cout << "Novo salario: " << salary2 << endl;
        cout << "Reajuste ganho: " << extra << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (salary > 2000.00)
    {
        salary2 = (salary + salary * .04);
        cout << fixed;
        extra = salary2 - salary;

        cout << setprecision(2);
        cout << "Novo salario: " << salary2 << endl;
        cout << "Reajuste ganho: " << extra << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}