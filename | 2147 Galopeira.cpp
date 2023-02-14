#include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char input[10001];
        cin >> input;
        int count = strlen(input);
        cout << fixed << setprecision(2);
        cout << count * .01;
        cout << endl;
    }
    return 0;
}