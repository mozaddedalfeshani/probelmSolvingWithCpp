#include <iostream>
using namespace std;
int main()
{

    int counter = 0;
    float input;
    int last;
    cin >> last;
    for (int i = 1; i <= last; i++)
    {
        cin >> input;
        while (input > 1)
        {

            input /= 2;
            counter++;
        }
        cout << counter << " dias" << endl;
        counter = 0;
    }

    return 0;
}