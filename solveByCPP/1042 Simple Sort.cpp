#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, aux;
    int v[3];

    cin >> a >> b >> c;
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

    cout << v[0] << endl
         << v[1] << endl
         << v[2] << endl
         << endl;
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, big;
//     int number[3], a,b,c;

//     // copy aray to another

//     cin >> number[1] >> number[2] >> number[3];
//     a = number[1];
//     b = number[2];
//     c = number[3];

//     // detect serial
//     for (i = 1; i <= 3; i++)
//     {
//         for (int j = i; j <= 3; j++)
//         {
//             if (number[i] > number[j])
//             {
//                 big = number[i];
//                 number[i] = number[j];
//                 number[j] = big;
//             }
//         }
//     }
//     // cout all
//     cout << number[1] << endl;
//     cout << number[2] << endl;
//     cout << number[3] << endl;
//     cout << endl;
//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;

//     return 0;

// }