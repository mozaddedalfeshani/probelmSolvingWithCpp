#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    short int a, b;
    cin >> a >> b;
    string name[11] = {"zero", "one",
                       "two",
                       "three",
                       "four",
                       "five",
                       "six",
                       "seven",
                       "eight",
                       "nine"};

    for (i = a; i <= b; i++)
    {
        if (i <= 9 && i >= 1)
        {
            cout << name[i] << endl;
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
