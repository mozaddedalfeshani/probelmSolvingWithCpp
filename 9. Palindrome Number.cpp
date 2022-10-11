#include <iostream>
using namespace std;
int main()
{
    int reminder, input, total = 0;
    cin >> input;
    int input2 = input;
    if (input > 0)
    {
        while (input != 0)
        {
            reminder = input % 10;
            total = total * 10 + reminder;
            input /= 10;
        }
        if (total == input2)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}