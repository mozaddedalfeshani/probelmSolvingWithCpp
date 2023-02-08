// #include <iostream>
// using namespace std;
// int main()
// {
//     int first, last, sum = 0;

//     cin >> first >> last;
//     for (short int i = first; i <= last; i++)
//     {
//         if (i % 13 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     cout << sum << endl;

//     return 0;
// }

//
#include <iostream>
using namespace std;
int main()
{
    int x, y, aux;
    int soma = 0;
    cin >> x >> y;

    if (x > y)
    {
        aux = y;
        y = x;
        x = aux;
    }

    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            soma += i;
    }
    cout << soma << endl;
    return 0;
}