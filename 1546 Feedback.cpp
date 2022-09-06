#include <iostream>
using namespace std;
int main()
{

    int n, i, j, k, input;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        for (j = 1; j <= k; j++)
        {
            cin >> input;
            if (input == 2)
            {
                cout << "Naej" << endl;
            }
            else if (input == 1)
            {
                cout << "Rolien" << endl;
            }
            else if (input == 3)
            {
                cout << "Elehcim" << endl;
            }
            else if (input == 4)
            {
                cout << "Odranoel" << endl;
            }
        }
    }

    return 0;
}