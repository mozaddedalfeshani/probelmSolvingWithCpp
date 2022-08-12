#include <iostream>
using namespace std;
int main()
{

    string name[11] = {"zero", "one",
                       "two",
                       "three",
                       "four",
                       "five",
                       "six",
                       "seven",
                       "eight",
                       "nine"};

    int in;
    cin >> in;
    if (in <= 9 && in >= 1)
    {
        if (in == 1)
        {
            cout << name[1] << endl;
        }
        else if (in == 2)
        {
            cout << name[2] << endl;
        }
        else if (in == 3)
        {
            cout << name[3] << endl;
        }
        else if (in == 4)
        {
            cout << name[4] << endl;
        }
        else if (in == 5)
        {
            cout << name[5] << endl;
        }
        else if (in == 6)
        {
            cout << name[6] << endl;
        }
        else if (in == 7)
        {
            cout << name[7] << endl;
        }
        else if (in == 8)
        {
            cout << name[8] << endl;
        }
        else if (in == 9)
        {
            cout << name[9] << endl;
        }
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

    return 0;
}
