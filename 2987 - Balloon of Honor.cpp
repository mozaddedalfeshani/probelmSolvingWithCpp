
#include <iostream>
#include <strings.h>
using namespace std;
int main()
{

    int i, k;
    char ch;
    ch = getchar();
    for (i = 1, k = 65; i <= 26; i++, k++)
    {
        if (ch == k)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}